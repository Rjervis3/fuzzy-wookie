#include <stdio.h>
#include <string.h>

/* Program to record, print, and process an individual's four test scores
   and final exam score
*/

/* the type studentType specifies a struct containing relevant data for one student
 */
typedef struct
{
  char name [20];
  double test1;
  double test2;
  double test3;
  double exam;
  double semAvg;
} studentType;

/* procedure to print a student's name and record */
void printStudent (studentType stu)
{
  printf ("%-20s: %7.1lf  %7.1lf  %7.1lf   %7.1lf   %7.1lf\n",
	  stu.name, stu.test1, stu.test2, stu.test3, stu.exam, stu.semAvg);
}

/* Procedure to compute the weighted average of test scores */
double
computeSemAvg(studentType stu)
{
  // stu.test1= 120;  //testing the scope of structs                           \
                                                                                
  return (stu.test1 + stu.test2 + stu.test3 + 2*stu.exam) / 5.0;
}

int main ()
{
  /* declaration and initialization of three students */
  /* declaration and initialization of students */
  studentType stu [4] = {
    {"Michael Mouse",      93.2, 98.7, 89.6, 95.6},
    {"Sebastian the Fish", 75.3, 78.8, 72.6, 92.6},
    {"Shamrock the Cat",   85.3, 87.2, 78.5, 82.8},
    {"Inky the Dog",       98.6, 86.9, 69.8, 93.1}
  };
  
  /* print initital student records  */
  printf ("Initial student records\n");
  printf ("name                    test 1   test 2   test 3  final exam\n");
  int i;
  for (i = 0; i < 4; i++)
    {
      stu[i].semAvg = computeSemAvg (stu[i]);
    }
  for (i = 0; i < 4; i++)
    {
      printStudent (stu[i]);
    }
  return 0;
}
