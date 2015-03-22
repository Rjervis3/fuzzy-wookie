#include <stdio.h>
#include <string.h>

/* Program to record, print, and process an individual's four test scores
    and final exam score
*/

/* a student struct identifies relevant data for one student
 */
struct student 
{
  char name [20];
  double test1;
  double test2;
  double test3;
  double exam;
};
/* Procedure to compute the weighted average of test scores */
double
computeSemAvg(struct student stu)
{
// stu.test1= 120;  //testing the scope of structs
return (stu.test1 + stu.test2 + stu.test3 + 2*stu.exam) / 5.0;
}

/* procedure to print a student's name and record */
void printStudent (struct student stu)
{
  printf ("%20s: %7.1lf  %7.1lf  %7.1lf   %7.1lf       %7.1lf \n",
	stu.name, stu.test1, stu.test2, stu.test3, stu.exam, computeSemAvg(stu));
}
/* Procedure to add ten percent to test2 score*/
void add10Percent (struct student * stu)
{
stu->test2+=10; // could also use (*stu).test2 += 10
}

  
int main ()
{
  /* declaration and initialization of three students */
  struct student stu1 = {"Michael Mouse",      93.2, 98.7, 89.6, 95.6};
  struct student stu2 = {"Sebastian the Fish", 75.3, 78.8, 72.6, 92.6};
  struct student stu3 = {"Shamrock the Cat",   85.3, 87.2, 78.5, 82.8};
  struct student stu4;
  strcpy (stu4.name, "Inky the Dog");
  stu4.test1 = 98.6;
  stu4.test2 = 86.9;
  stu4.test3 = 69.8;
  stu4.exam = 93.1;

  /* print initital student records  */
  printf ("Initial student records\n");
  printf ("name                    test 1   test 2   test 3  final exam");
  printf("  weighted average\n");
  printStudent (stu1);
  printStudent (stu2);
  printStudent (stu3); 
  printStudent (stu4); 
  add10Percent(&stu4);
  printStudent (stu4);
  return 0;
}
