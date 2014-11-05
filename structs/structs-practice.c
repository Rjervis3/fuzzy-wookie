/* This is a program to explore the use of structs */



#include <stdio.h>
#include "MyroC.h"


// compile with gcc -lMyroC -o 1 structs-practice.c 

/* original declaration of struct
struct Point{
    int x;
    int y;
  };
*/
typedef struct{
    int x;
    int y;
  }Point;

 void drawPoint (Picture * pic, struct Point p, Pixel pix)
 {

 rSetPicturePixel(pic, p.y, p.x, pix);
  rShowPicture(pic);

 }

int main()
{
  
  Picture * displayedPic = rLoadPicture
 ("/home/jervisre/csc161/labs/pTest3/Module100/structs/blank.jpg");
  // rShowPicture(displayedPic);
 
  Pixel pixel1;
  pixel1.R =0;
  pixel1.G =0;
  pixel1.B =0;

  struct Point point1;
  point1.x=50;
  point1.y=50;
 struct Point point2;
  point2.x=150;
  point2.y=150;

  Pixel pixelBlack;
  pixelBlack.R=pixelBlack.G=pixelBlack.B=0;
 /* Set the Pixel at location (row, col) in Picture to the specified 
     Pixel Pix.
  void rSetPicturePixel (Picture * pic, int row, int col, Pixel pix);
  */
  rSetPicturePixel(displayedPic, point1.y, point1.x, pixel1);
  rShowPicture(displayedPic);

  drawPoint (displayedPic, point2, pixelBlack);

  return 0;
}
