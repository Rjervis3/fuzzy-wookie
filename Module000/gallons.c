/* A C program that uses values for pints, quarts, and gallons and determines
 * the appropriate number of liters. */


#include <stdio.h>

int
main(){

  double gallons = 3;
  double quarts = 2;
  double pints = 1;
  double liters;
	/* 4 quarts in a gallon and 2 quarts in a pint */
  double total_quarts = gallons * 4 + (pints / 2.0) + quarts;

  liters = total_quarts / 1.056710 ;      /* arithmetic, assignment */
 
  printf("%.1lf quarts = %lf liters\n", total_quarts, liters);
  return 0;

} 
