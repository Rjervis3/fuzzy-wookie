/*
 *
 *  structs-practice.c
 * by: Renn Kervis
 *
 *              This is a program to explore the use of structs */



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

struct Rect{
  Point point1;
  Point point2;
};

void drawRectangle(Picture * pic, struct Rect r)
{
  Pixel pixelBlack; 
  pixelBlack.R=pixelBlack.G=pixelBlack.B=0;
  int xcor, ycor;

  //left side
  for(ycor=r.point1.x; ycor <= r.point2.y; ycor++)
    rSetPicturePixel(pic, r.point1.y, ycor, pixelBlack);
  //top side
   for(xcor=r.point1.y ; xcor <= r.point2.y; xcor++)
    rSetPicturePixel(pic, xcor, r.point1.x, pixelBlack);
  //right side
  for(ycor=r.point1.x ; ycor <= r.point2.y; ycor++)
    rSetPicturePixel(pic, r.point2.y, ycor, pixelBlack);
  //bot side
  for(xcor=r.point1.y ; xcor <= r.point2.y; xcor++)
    rSetPicturePixel(pic, xcor, r.point2.y, pixelBlack);

  rShowPicture(pic);

}
 void drawPoint (Picture * pic, Point p, Pixel pix)
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

  Point point1;
  point1.x=60;
  point1.y=55;

  Point point2;
  point2.x=152;
  point2.y=155;

 //question 3 a, declare a black pixel
  Pixel pixelBlack;
  pixelBlack.R=pixelBlack.G=pixelBlack.B=0;
  rSetPicturePixel(displayedPic, point1.y, point1.x, pixel1);
  rShowPicture(displayedPic);

  drawPoint (displayedPic, point2, pixelBlack);

  struct Rect rect1;
  rect1.point1=point1;
  rect1.point2=point2;
  drawRectangle(displayedPic, rect1);

  return 0;
}
