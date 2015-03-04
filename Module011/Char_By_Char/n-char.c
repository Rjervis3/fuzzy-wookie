/* 
   n-char.c
   Author: Renn Jervis
   3/3/15

   A program to prompt the user to enter a number, declare the 
   appropriatly sized array, and read the specified number of chars
   from the keyboard. */

#include <stdio.h>


int
main(int argc, char* argv[])
{
  printf("Please enter a number: ");
  int i;
  scanf("%d", &i);
  while (getchar() != '\n');
  char str[i+1];
  int j = 0;
  printf("Enter a string of %d characters: " , i);
  while (j<=i)
    {
      str[j] = getchar();
      j++;
    }
  str[i] = 0;

  printf("\nString entered: %s\n", str);

  return 0;
}
