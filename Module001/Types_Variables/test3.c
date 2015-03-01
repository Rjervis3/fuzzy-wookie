/* Program to test increment and decrement operators */

#include <stdio.h>

int
main(int argc, char* argv[])
{
   int a = 1;
   int b = 7;
   printf ("a = %d, b = %d\n", a, b);
   a++;
   ++b;
   printf ("a = %d, b = %d\n", a, b);

  int c;
  a = 0;
  b = a++; /* b is 0 , a is now 1 */
  c = ++a; /* c is 2, a is 2 */
  printf(" a = %d b = %d c = %d\n", a,b,c); /* 2, 0, 2 */
  a = 0;
  b = ++a;  /* b is 1 , a is 1*/
  c = a++; /* a is 2, c is 1 */
  printf(" a = %d b = %d c = %d\n", a,b,c);	/* 2, 1, 1 */

  int r, s;
  r = 5;
  s = 7;
  printf(" r = %d s = %d\n", ++r, s++); /* prints r = 6, s = 7 */
  printf(" r = %d s = %d\n", r, s);	 /* prints r = 6, s = 8 */
  int t = r++ + s++; /* t is 14, r and s incremented */
  printf(" r = %d s = %d, t = %d\n", r, s, t);	/* 7, 9, 14 */
  int u = ++r + ++s;  /* 18 */
  printf(" r = %d s = %d, u = %d\n", r, s, u); /* 8, 10, 18 */	


return 0;
}//main
