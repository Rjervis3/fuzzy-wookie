/*
 *
 *
 *   2darraySort.c
 *
 * A program to use an insertion sort for sorting the elements in each row
 * of a multi dimentional array.
 */

#include <stdio.h>

void printArray (int array[][5])
{
  int i, j;
 printf ("The 2-dimensional array is:\n");
 for (j = 0; j < 5; j++)
   {
     for (i = 0; i < 5; i++)
       printf ("%3d ", array[j][i]);
    printf ("\n");
   }

} //printArray

int main()
{
  int numArray[5][5] = {{5, 8, 12, 1, 3}, {1, 12}, {32, -5, 3, 5, 8}, 
                        {3, 3, 2, 6, -12}, {1}};
  int i, row, j;
  int temp;

    printArray(numArray);
  for (row =0; row <5; row++)
{
    for (i = 1; i < 5; ++i)
      {
        temp = numArray[row][i];
       
        j = i - 1;
        while ((j >= 0) && (temp < numArray[row][j]))
          {
            numArray[row][j + 1] = numArray[row][j];
            --j;
          }
         numArray[row][j + 1] = temp;
      }

}

    printf("sorted: \n");
    printArray(numArray);
  return 0;
}
