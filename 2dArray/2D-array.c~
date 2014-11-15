#include <stdio.h>

int
main()
{
  int i, j; // counter variables initialized to 0

  int array1[][3] = {{4, 5, 3}, {5, 3, 5}, {5, 2, 8}};
  // size 36, size each row 12
  int array2[][5] = {{3, 4, 1}, {6, 3, 2, 4, 1}, {3, 5}};
  //size 60, size each row 20
  int array3[2][2] = {{5, 3}, {2, 1}};
  //size 16, size each row 8
  int array6[][4] = {{0, 1, 2, 3}, {2, 4, 6, 8}, {3, 6, 9, 12}};
  //size 16, size each row 8

  // int array4[3][] = {{2, 4, 3}, {4, 4, 1}, {1, 2, 3}};
  //int array5[][] = {{3, 2, 1}, {4, 3, 2}, {2, 4, 6}};

  printf ("array1 size = %d\n", sizeof(array1)); 
  for (i = 0; i < 3; i++)
    printf ("\tsize of row %d:  %d\n", i, sizeof(array1[i]));
  printf("\n");

  printf ("array2 size = %d\n", sizeof(array2)); 
  for (i = 0; i < 3; i++)
    printf ("\tsize of row %d:  %d\n", i, sizeof(array2[i]));
  printf("\n");

  printf ("array3 size = %d\n", sizeof(array3)); 
  for (i = 0; i < 3; i++)
    printf ("\tsize of row %d:  %d\n", i, sizeof(array3[i]));
  printf("\n");


  //print array 1
  printf("Array 1: \n");
  for(i=0; i<3; i++)
    {
      for (j=0; j<3; j++)
        {
          printf("%d ", array1[i][j]);
        }
      printf("\n");
    }
  printf("\n");

  //print array 2
  printf("Array 2: \n");
  for(i=0; i<3; i++)
    {
      for (j=0; j<5; j++)
        {
          printf("%d ", array2[i][j]);
        }
      printf("\n");
    }
  printf("\n");


  //print array 3
  printf("Array 3: \n");
  for(i=0; i<2; i++)
    {
      for (j=0; j<2; j++)
        {
          printf("%d ", array3[i][j]);
        }
      printf("\n");
    }
  printf("\n");

 //print array 6
  printf("Array 6: \n");
  for(i=0; i<3; i++)
    {
      for (j=0; j<4; j++)
        {
          printf("%d ", array6[i][j]);
        }
      printf("\n");
    }
  printf("\n");



} // main
