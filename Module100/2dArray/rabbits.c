/* 
 *  rabbits.c
 *
 *  A program to investigate 2d lists
 */


#include <stdio.h>

int main()
{
  int rabbit[2][3] = { 1, 2, 3, 4, 5, 6 };
  int r, c;

 for (c = 0; c < 3; c++)
         for (r = 0; r < 2; r++)
             printf ("rabbit[%d,%d] = %d\n", r, c, rabbit[r][c]);

  return 0;
}
