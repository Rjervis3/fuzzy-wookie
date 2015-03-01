Commentary on Types and Variables lab

- Code snippets from http://www.cs.grinnell.edu/~walker/courses/161.sp15/
	modules/cond-loops-motion/lab-types-variables.shtml

  int a = 5;  
  int b = 6;
  int c = a/b;   /* division of two ints results in 0 */
  int d = b/a;  /* division of two ints results in 1 */
  int e = (a + b) / 10;  /* integer division yields 1 */
  int f = (a + b) % 10; /* modulo returns 1 */
  double x = (a + b) / 10;  /* converts double to int, 1.0 */
  double y = (a + b) / 10.0;  /* converts int to double 1.1 */
  printf ("a=%d, b=%d, c=%d, d=%d, e=%d, f=%d, x=%lf, y=%lf\n", a, b, c,
	 d, e, f, x, y);


-> Another code snippit to test casting
  int k = 5.0;
  int m = 7.7;
  double n = 5;
  int p = k/m;  /* integer division cast to int 0 */
  double q = k/m; /* integer division cast to double 0.0  */
  printf ("k = %d, m=%d, n=%lf, p=%d, q=%lf\n", k, m, n, p, q);
  double r = (double) (k/m);  /* int division cast to double 0.0 */
  double s = (double) k / m;  /* double division .714 */
  double t = k / (double) m; /* double divsion m=.714 */
  double u = (double) k / (double) m; /* over casting .714 */
  printf ("r=%lf, s=%lf, t=%lf, u=%lf\n", r, s, t, u);

-> Order of operations applies

-> Pre-increment increments before assignments
-> Post-increment increments after assignments

   int a = 1;
   int b = 7;
   printf (" a = %d, b = %d\n", a, b);
   a++;
   ++b;
   printf (" a = %d, b = %d\n", a, b);
-> prints as expected

  int c;
  a = 0;
  b = a++; /* b is 0 , a is now 1 */
  c = ++a; /* c is 2, a is 2 */
  printf(" a = %d b = %d c = %d\n", a,b,c); /* 2, 0, 2 */
  a = 0;
  b = ++a;  /* b is 1 , a is 1*/
  c = a++; /* a is 2, c is 1 */
  printf(" a = %d b = %d c = %d\n", a,b,c);     /* 2, 1, 1 */


  int r, s;
  r = 5;
  s = 7;
  printf(" r = %d s = %d\n", ++r, s++); /* prints r = 6, s = 7 */
  printf(" r = %d s = %d\n", r, s);      /* prints r = 6, s = 8 */
  int t = r++ + s++; /* t is 14, r and s incremented */
  printf(" r = %d s = %d, t = %d\n", r, s, t);  /* 7, 9, 14 */
  int u = ++r + ++s;  /* 18 */
  printf(" r = %d s = %d, u = %d\n", r, s, u); /* 8, 10, 18 */



-> Checkout the ASCII letter charts

-> Understand connections between char and int

//end



