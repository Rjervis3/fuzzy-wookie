#include <stdio.h>
#include "MyroC.h"

/* ....... Conversions involving 2-dimensional arrays ........... */
/* Convert a Picture to a 2-dimensional array of Pixels

   Precondition: Pixel pixArray [][] is a two dimensional array of size
   [rGetPictureHeight (pic)][rGetPictureWidth (pic)] */

void picToPix2DArray (Picture * pic, int width, Pixel pixArray [][width])
{
  int i, j;
  int height = rGetPictureHeight (pic);

  for (i = 0; i < height; i++)
    for (j = 0; j < width; j++)
      pixArray[i][j] = rGetPicturePixel (pic, j, i);
}

/* Convert a 2-dimensional array of Pixels to a Picture

   Precondition: Pixel pixArray [][] is a two dimensional array of size
   [rGetPictureHeight (pic)][rGetPictureWidth (pic)] */
void pix2DArrayToPic (Picture * pic, int width, Pixel pixArray [][width])
{
  int i, j;
  int height = rGetPictureHeight (pic);
      
  for (i = 0; i < width; i++)
    for (j = 0; j < height; j++)
      rSetPicturePixel (pic, j, i, pixArray[j][i]);
}

/* ....... Conversions involving 1-dimensional arrays ........... */
/* Convert a Picture to a 1-dimensional array of Pixels

   Precondition: Pixel * pixArray is a two dimensional array of size
   [rGetPictureHeight (pic)][rGetPictureWidth (pic)] */
void picToPix1DArray (Picture * pic, Pixel pixArray [])
{
  int i, j;
  // int width = rGetPictureWidth (pic);
  // int height = rGetPictureHeight (pic);

  int width =rGetPictureWidth(pic);
   int height = rGetPictureHeight(pic);

  for (i = 0; i < width; i++)
    for (j = 0; j < height; j++)
      pixArray[i*width + j] = rGetPicturePixel (pic, j, i);
}

/* Convert a 1-dimensional array of Pixels to a Picture

   Precondition: Pixel * pixArray is a two dimensional array of size
   [rGetPictureHeight (pic)][rGetPictureWidth (pic)] */
void pix1DArrayToPic (Picture * pic, Pixel pixArray [])
{
  int i, j;
  int width = rGetPictureWidth (pic);
  int height = rGetPictureHeight (pic);
      
  for (i = 0; i < height; i++)
    for (j = 0; j < width; j++)
      rSetPicturePixel (pic, j, i, pixArray[i * width + j]);
}


/* .................... Flip picture images .................... */
void flipPicUpsideDown (Picture * pic)
{
  /* use 2-dimensional processing */
  int width = rGetPictureWidth (pic);
  int height = rGetPictureHeight (pic);
  Pixel pixArray [height][width];
  
  picToPix2DArray (pic, width, pixArray);

  pix2DArrayToPic (pic, width, pixArray);
}

void flipPicLeftToRight (Picture * pic)
{
  /* use 1-dimensional processing */
  int width = rGetPictureWidth (pic);
  int height = rGetPictureHeight (pic);
  Pixel pixArray [height*width];
  
  picToPix1DArray (pic, pixArray);
  pix1DArrayToPic (pic, pixArray);
}

int main ()
{
  printf ("program to manipulate pictures from the Scribbler 2 robot\n");

  // rConnect ("/dev/rfcomm0");

  printf ("taking picture");
  // Picture * pic1 = rTakePicture ();
  Picture * pic1 = rLoadPicture
   ("/home/jervisre/csc161/projects/project_100/flowers.jpg");
  flipPicUpsideDown (pic1);
  printf ("displaying upsidedown picture\n");
  rDisplayPicture (pic1, "upside down frame");

  printf ("taking picture");
  Picture * pic2 = rLoadPicture
   ("/home/jervisre/csc161/projects/project_100/flowers.jpg");
  flipPicLeftToRight (pic2);
  printf ("displaying left-to-right picture\n");
  rDisplayPicture (pic2, "Left to Right frame");

  sleep(5);

  return 0;
}
