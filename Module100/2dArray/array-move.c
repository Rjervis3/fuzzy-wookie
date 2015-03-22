/* * * * *
 * array-move.c
 *
 * Make the Scribbler move in different speeds and times by putting different 
 * numbers to different 
 * arrays and giving them as parameters to the commands rForward and rTurn.
 *
 * Authors: Dilan Ustek, Erik Opavsky - edited for this lab by Renn Jervis
 *
 * 
 */


#include "MyroC.h"

int
main()
{

  rConnect("/dev/rfcomm0");
  rSetForwardnessTxt("fluke-forward");

  int i;

  // the various speeds and times in two seperate arrays

  //declare a struct to store both time and speed
  struct movement{
    double speed;
    double time;
  }movArray[3]; //declare an array of type struct movment with 3 entries

  //set various entries in array
  movArray[1].speed =.3;
  movArray[1].time =.3;
  movArray[2].speed =.2;
  movArray[2].time =1.;
  movArray[0].speed =.4;
  movArray[0].time =.9;
  
  //iterate through array of structures to move robot
  for (i = 0; i < 3; i++)
    {
      rForward (movArray[i].speed, movArray[i].time);
      rTurn (movArray[i].speed, movArray[i].time);
    }

  //declare 2d array; for each row 0th element is speed, 1st element time
  double array2D[][2]= {{.3, .3}, {.5, .5}, {1, 1}};

  //iterate through each row and access data to move robot
  for(i=0; i<3; i++)
    {
      rForward(array2D[i][0], array2D[i][1]);
      rTurn(array2D[i][0], array2D[i][1]);
    }

  
  // beep when done
  rBeep (1, 500);
 
  rDisconnect();

  return 0;
} // main
