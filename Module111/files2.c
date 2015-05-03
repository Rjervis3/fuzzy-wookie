/* Author: Renn Jervis
 * Based on lab by Henry Walker at:
 * http://www.cs.grinnell.edu/~walker/courses/161.sp15/modules/
 * comm-line-files/lab-files-2.shtml
 *
 * Referenced: state-year.c, the example for this lab
 */

 
#include <stdio.h>
#include <stdlib.h>

/* Function to extract median incomes and put in
a new file */
void medianIncome1995(char * read, char * write)
{


	FILE * data = fopen(read, "r");
	FILE * medians = fopen(write, "w");

	/* skip first 4 lines intro data */
	int i;
  for (i = 0; i < 5; i++)
    while (fgetc(data) != '\n');

/* for all states */
for(i=0; i<8; i++)
{
	/* read name */
	char * name = malloc(sizeof(char)*22);
  	fgets(name, 22, data);

  	// skip 1997 and 1996 median, stop at 1995

     int median, j;
     for(j = 0; j<3;j++)
     {
      fscanf (data, "%d", &median);
     }
     
     /* write appropriate data to file */
     fprintf(medians, "%s\t%d\n", name, median); 
      //ignore rest of line;
      while (fgetc(data) != '\n');

}

	fclose(data);
	fclose(medians);
}

void medianGiven(char * read)
{
	FILE * data = fopen(read, "r");
	printf("Please enter a year between 1979 and 1997 (inclusive): ");
	int column, i;
	scanf("%d", &column);

/* col number in file in size of array - (distance from end of array) */
	column = 18 - (column - 1979);

	/* skip first 4 lines intro data */
	
  for (i = 0; i < 5; i++)
    while (fgetc(data) != '\n');

	//printf("col: %d\n", column);
	/* for all states */
	for(i=0; i<8; i++)
	{
		/* read name */
		char * name = malloc(sizeof(char)*22);
  		fgets(name, 22, data);
 		//printf("reading %s\n", name);
  		int j, median;

		/* read until right column */
		for (j = 0; j<column+1; j++)
		{
    		fscanf (data, "%d", &median);
    		//printf("%d\n", median);	
		}

		  //ignore rest of line;
      while (fgetc(data) != '\n');

	printf("%s\t%d\n", name, median);

	}
	fclose(data);

}//medianGiven
/* print to the screen states whose median income decreased some year */
void medianDecrease(char * read)
{
FILE * data = fopen(read, "r");

/* skip first 4 lines intro data */
	int i;
  for (i = 0; i < 5; i++)
    while (fgetc(data) != '\n');


	
	/* for all states */
	for(i=0; i<8; i++)
	{
		/* read name */
		char * name = malloc(sizeof(char)*22);
  		fgets(name, 22, data);
 		
 		printf("%s\n", name);
 		printf("Years where median decreased:\n");
  		int j, median, prevMedian, year;

  		/* read first val into both for future comparisons */
  		fscanf (data, "%d", &median);
  		prevMedian = median;

		/* read until last column */
		for (j = 0, year = 1996; j<18; j++, year--)
		{
    		fscanf (data, "%d", &median);
    		/* recall years go atest -> earliest */
    		//printf("Prevmedian: %d, year: %d", prevMedian, year+1);
    		//printf(" median: %d year: %d\n", median, year);
    		
    		if (median > prevMedian)
    		{	//print year of prevMedian
    			printf("%d\n", year+1);	
    		}
    		prevMedian = median;
		}

		  //ignore rest of line;
      while (fgetc(data) != '\n');
  }

fclose(data);

}// medianDecrease


int main(){

	char * a= "state-income.dat";
	char * b= "state-income-for-1995.txt";

	/* read median incomes */
	//medianIncome1995(a, b);

	/* Ask for year and print medians for that year */
	//medianGiven(a);

	/* print years where median decreases */
	//medianDecrease(a);

	return 0;
}