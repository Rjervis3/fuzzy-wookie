
#include <stdio.h>
#include "MyroC.h"

void colorToGray(Picture * pic);

void setPictureMax (Picture * pic)
{
  int x, y, height, width, max;
  double grayvalue=0;
  Pixel pixel;
  width =rGetPictureHeight(pic);
  height =rGetPictureWidth(pic);
  for(x=0; x<width; x++)
    {
      for(y=0; y<height; y++)
        {
          pixel=rGetPicturePixel(pic, y, x);
          //printing lines for testing correctness
          // printf ("inital pixel values (R, G, B): ");
          //printf("(%d %d %d)\n", pixel.R, pixel.G, pixel.B);
          max=pixel.R;
          if (pixel.R < pixel.G || pixel.R < pixel.B)
            {
            pixel.R=0;
            }
          if (pixel.G < pixel.B)
            {
            pixel.G=0;
            }
          if (pixel.B < pixel.G)
            {
              pixel.G=0;
            }
         
 //printing lines for testing correctness
          //  printf
          //("pixel values (R, G, B): (%d %d %d)\n", pixel.R, pixel.G, pixel.B);
          rSetPicturePixel(pic, y, x, pixel);
        }
    }
         
}


int main()
{
  rConnect("/dev/rfcomm0");

  //specify original picture
  //Picture * loadPic = rLoadPicture
  //  ("/home/jervisre/csc161/projects/project_100/flowers.jpg");

  //take pictures with robot

  Picture *takePic;
  takePic = rTakePicture();
  Picture * pic1= rTakePicture();

  rShowPicture(takePic);
  colorToGray(takePic);
 
  rShowPicture(pic1);
  setPictureMax(pic1);
  rShowPicture(pic1);

  rDisconnect();
}

void colorToGray(Picture * pic)
{
  int x, y, height, width;
  double grayvalue=0;
  Pixel pixel;
  width =rGetPictureHeight(pic);
  height =rGetPictureWidth(pic);
  for(x=0; x<width; x++)
    {
      for(y=0; y<height; y++)
        {
          pixel=rGetPicturePixel(pic, y, x);
          grayvalue=.3*pixel.R+.5*pixel.G+.11*pixel.B;
          pixel.R=pixel.G=pixel.B=grayvalue;
          rSetPicturePixel(pic, y, x, pixel);
        }
    }
}

