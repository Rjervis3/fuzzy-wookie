Commentary and Questions on Stucts lab

-> Unless otherwise indicated questions and code can be found at:
http://www.cs.grinnell.edu/~walker/courses/161.sp15/modules/struct-2d-arrays/
lab-structs.shtml


Copy test-scores-1.c to your account, compile and run it, and review how
 it works.

A. Where is struct student declared? Why do you think the declaration 
   comes before procedure printStudent and before main?
	-> The declaration of the struct is outside all functions because
	we want to create a global template (ie struct) 
B. How are the fields of variable stu1 initialized? -> We initialize the
	fields in a stuct either with array notation specifying
	values in the same order as the fields are declared or by 
	using dot notation to asses specific fields directly.
C. Why do you think strcpy is used to initialize the name field for stu4?
	Because we cannot use assignment to copy strings (except in the 
	case of initialization). 
D. In printing the output, how are the titles and printf statements
   coordinated, so that the test scores appear in aligned columns? -> Scores
	are printed in fields of specific length
E The format %-20s is used to print the name of a student. What does 
  the minus sign accomplish? (Hint: What happens if the minus sign is removed?)
-> The minus left-justifies the name field

 -------

2. Add function computeSemAvg to test-scores-1.c. This function should take
   a struct student as a parameter and return (not print) the weighted
   average that counts each  test with a weight of 1 and the final exam with
   a weight of 2. Use computeSemAvg to add a column to the output of the
   program.

-expand the printf statement in printStudent to include the average for the
 student
-expand the printing of the title in main to label the new column.

-> see test-scores-1.c

3. Change the value of the test1 field within computeSemAvg to 120.0.

	+ The new value is not printed for any students in printStudent
	+ This indicates structs are passed by value, because
	  if it were passed by reference, the change would not have
	  been only within the scope of the average function and the
	  original values would change.

4.  Write a procedure add10Percent that adds 10% to test2 of a student. 
-> see test-scores-1.c

---------------------------

5. Working with test-scores-2.c, copy functions computeSemAvg and 
   add10Percent from test-scores-1.c.
	a. output is same as test-scores-1
	b. 6 more students added to array
	c. printMinMax that computes and prints the maximum and minimum 
           semester averages
	d. modify above so it prints name of student
---------------

6. Considering test-scores-3.c
	a. If we move the typedef declaration and still try to use a
	   variable of the type defined in that typedef before its
	   declaration we get a compiler error:
    	 -> error: unknown type name 'studentType'
	b. Add an additional field, semAvg, to the studentType definition,
	   but leave the initialization as it is. The program compiles and 
	   runs.
	c. Uninitialized values initialized to 0

7. After initialization add
int i;
  for (i = 0; i < 4; i++)
    {
      stu[i].semAvg = computeSemAvg (stu[i]);
    }
-> Check printing now works correctly. Yes!
--------------------------------------
# Homework
