Commentary and exercises for Lab on Functions and Parameters, part 1


- Unless otherwise indicated, questions and code snippets / programs are 
taken from 
http://www.cs.grinnell.edu/~walker/courses/161.sp15/modules/arrays-functions/
lab-functions-1.shtml


-> Including a return statment in a fuction with a void signature produces
    an error at
   compile time:

quadratic.c:22:1: error: void function 'printEqn' should not return a value 
[-Wreturn-type]
return coeff2;
^      ~~~~~~
1 error generated.
make: *** [quadratic] Error 1

-> Since the function printEqn does not return anything, we cannot assign
   its return value to anything in main. If we try this 
   (double val = printEqn (params), we get a compile error:

quadratic.c:50:10: error: initializing 'double' with an expression of 
incompatible type 'void'
  double value = printEqn   (2.0, -7.0, -4.0);
         ^       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1 error generated.
make: *** [quadratic] Error 1

-> If we separate the function call and the assignment, the program will
   compile and run but the return value of the function (which we
   presumably want to keep) is discarded.


-> Including a print in the disc function yields
program illustrating functions and the quadratic formula
Equation:  1.000000*x^2 + -3.000000*x + 2.000000 = 0
r = 1.000000, s = -3.000000, t = 2.000000
    Roots:  2.000000 and 1.000000
Equation:  2.000000*x^2 + -7.000000*x + -4.000000 = 0
r = 2.000000, s = -7.000000, t = -4.000000
    Roots:  4.000000 and -0.500000


-> When computation functions are called by other functions to return a
   value, it is perhaps unadvisable to include print statments. They will be 
   printed when the function call is made
   and perhaps decrease readability or clarity.

--------------------------------------------------------------------
-> The program yoyo.c causes the scribbler to move forward and back for 
   some number of repetitions. The program prints the count which is the 
   param passed to the function, and the number of repetitions, 
   which is 3*count.

-> adding   
   result = yoyo (repetitions); 
   does not change the count of repetitions becuase each time we call the
   function by passing it the same number. Adding
   repetitions = yoyo (repetitions);
   repetitions = yoyo (repetitions);
   does change the number of repetitions because the yoyo function returns
   a value that is 3 times the number passed in. Since we store this in the
   'repetitions' variable, and the next call passes this variable, the 
   robot will move 3 times the value of the param. (ie repetitions
   begins as 2, then is 6, and then will be 9 after the final call).

-> Variables with the same name across functions have no effect on
   eachother.

-> inserting yoyo (yoyo (repetitions)); has the same affect as the 
   double function call above, but does not change the value of the 
   repetions variable. The nested call returns 3 times the original value
   of repetitions and then we pass this value into the function again. The
   final return value is discarded.

----------------------------------------------------------------------------
-> considering lab-value-parm.c
we see x begins as 2 and y begins as 3. The first print statement is
main1 x=2, y=3. We then pass the values of x and y to proc b, which passes
those values to procA. ProcA prints procA1 x=2, y=3. We then have 2
assignments and procA prints procA2 x=5, b=6. We return 11 to variable z in
procB which prints ProcB x=2, y=3, z=11. We then have assignments and 
print ProB2 x= 5, y=6, z=11. We then return to main and print main2 x=2,
y=3.


# finished
