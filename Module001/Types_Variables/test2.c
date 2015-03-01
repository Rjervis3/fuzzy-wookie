/* The following is a program to test the results of integer division
   and the relationship between primative types in c as well as the effects
   of casting */

#include <stdio.h>


int
main() {

 int k = 5.0;
  int m = 7.7;
  double n = 5;
  int p = k/m;  /* integer division cast to int 1 */
  double q = k/m; /* integer division cast to double 1.0  */
  printf ("k = %d, m=%d, n=%lf, p=%d, q=%lf\n", k, m, n, p, q);
  double r = (double) (k/m);  /* int division cast to double */
  double s = (double) k / m;  /* double division */
  double t = k / (double) m; /* double divsion m=7.7 */
  double u = (double) k / (double) m; /* over casting */
  printf ("r=%lf, s=%lf, t=%lf, u=%lf\n", r, s, t, u);

return 0;
} //main
