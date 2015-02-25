/* Author: Renn Jervis 2/25/15
 *
 * A program to connect to the scribbler 2 robots, beep a series of notes, 
 * and disconnect */

#include <stdio.h>
#include"MyroC.h"

int 
main(){
  rConnect(/dev/rfcomm0);
  for(i = 700; i<=800; i+=20)
    rBeep(1, i);


  rDisconnect();
  return 0;
}
