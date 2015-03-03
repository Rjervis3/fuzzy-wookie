Commentary and exercises for Lab on Functions and Parameters, part 1


- Unless otherwise indicated, questions and code snippets / programs are taken from 
http://www.cs.grinnell.edu/~walker/courses/161.sp15/modules/arrays-functions/
lab-functions-1.shtml


-> Including a return statment in a fuction with a void signature produces an error at
   compile time:

quadratic.c:22:1: error: void function 'printEqn' should not return a value [-Wreturn-type]
return coeff2;
^      ~~~~~~
1 error generated.
make: *** [quadratic] Error 1

-> Since the function printEqn does not return anything, we cannot assign its return value
   to anything in main. If we try this (double val = printEqn (params), we get a compile error:

quadratic.c:50:10: error: initializing 'double' with an expression of incompatible type 'void'
  double value = printEqn   (2.0, -7.0, -4.0);
         ^       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1 error generated.
make: *** [quadratic] Error 1

-> If we separate the function call and the assignment, the program will compile and run 
   but the return value of the function (which we presumably want to keep) is discarded.


-> Including a print in the disc function yields
program illustrating functions and the quadratic formula
Equation:  1.000000*x^2 + -3.000000*x + 2.000000 = 0
r = 1.000000, s = -3.000000, t = 2.000000
    Roots:  2.000000 and 1.000000
Equation:  2.000000*x^2 + -7.000000*x + -4.000000 = 0
r = 2.000000, s = -7.000000, t = -4.000000
    Roots:  4.000000 and -0.500000


-> When computation functions are called by other functions to return a value, it is perhaps
   unadvisable to include print statments. They will be printed when the function call is made
   and perhaps decrease readability or clarity.




-> Variables with the same name across functions have no effect on eachother.

# unfinished