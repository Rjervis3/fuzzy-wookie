/*Author: Renn Jervis, 2/25/15
 *
 * A program to compute the area and circumference of a circle
*/

#include <stdio.h>
#define PI 3.14159

int
main()
{
double radius= 5;
double area;
double circumference;

area = radius*radius*PI;
circumference = radius*2*PI;

printf("A circle with a radius of %lf has a circumference of", radius);
printf(" %lf and an area of %lf\n", circumference, area);
return 0;
}
