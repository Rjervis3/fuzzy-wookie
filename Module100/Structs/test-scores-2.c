#include <stdio.h>
#include <string.h>

/* Program to record, print, and process three test scores and final exam scores
   for several students
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
void printMinMax (struct student stu [], int numStudents)
{
  int i;
  double z, min, max;
  char maxName[20];
  char minName[20];
  min = max = computeSemAvg(stu[1]);
  for(i=1; i<numStudents; i++)
    {
      z = computeSemAvg(stu[i]);
      if(z < min)
        {
	  strcpy( minName, stu[i].name);
          min = z;
        }
      if(z > max)
        {
	  strcpy(maxName, stu[i].name);
          max = z;
        }
    }
  printf("Highest semester average  Lowest semester average\n");
  printf("%12.2lf student: %s    %12.2lf student: %s\n",
	 max, maxName,  min, minName);
}

int main ()
{
  /* declaration and initialization of students */
  struct student stu [10] = {
                             {"Michael Mouse",      93.2, 98.7, 89.6, 95.6},
                             {"Sebastian the Fish", 75.3, 78.8, 72.6, 92.6},
                             {"Shamrock the Cat",   85.3, 87.2, 78.5, 82.8},
			     {"Inky the Dog",       98.6, 86.9, 69.8, 93.1},
			     {"Blinky the eye",     89.6, 98.0, 30.5, 87.8},
			     {"Smartie the smart",  99.0, 99.8, 100.0, 99.9},
			     {"Tweety the bird",    89.0, 89.0, 89.0, 89.0},
			     {"Marney",             78.9, 99.9, 88.9, 99.0},
			     {"Null student",       0.0,  00.0, 00.0, 00.0},
			     {"Outlier George",     102.0, 0.0, -1.0, 120.0}
                            };

  /* print initital student records  */
  printf ("Initial student records\n");
  printf ("name                    test 1   test 2   test 3  final exam\n");
  int i;
  for (i = 0; i < 10; i++)
    {
      printStudent (stu[i]);
    }

  printMinMax(stu, 10);
  return 0;
}
