/* The following is a program to test the results of integer division
   and the relationship between primative types in c */

#include <stdio.h>


int
main() {

  int a = 5;    
  int b = 6;
  int c = a/b;   /* division of two ints results in 1 */
  int d = b/a;  /* division of two ints results in 0 */
  int e = (a + b) / 10;  /* integer division yields 1 */
  int f = (a + b) % 10; /* modulo returns 1 */
  double x = (a + b) / 10;  /* converts double to int, 0.0 */
  double y = (a + b) / 10.0;  /* converts int to double 1.1 */
  printf ("a=%d, b=%d, c=%d, d=%d, e=%d, f=%d, x=%lf, y=%lf\n", a, b, c, 
         d, e, f, x, y);

return 0;
} //main
