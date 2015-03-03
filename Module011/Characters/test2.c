/* program to explore strings */

#include <stdio.h>
#include <string.h>

void string_reverse (char str[]);

int
main()
{
  char computerscience[16];
  char isawesome[16] = "computerscience";

  printf ("strlen (computerscience): %d\n", strlen (computerscience) );
  printf ("strlen (isawesome): %d\n", strlen (isawesome) );

  printf ("computerscience: %s\n", computerscience );
  printf ("isawesome: %s\n", isawesome );

  printf("\n\nTesting of stringreverse:\n");
  string_reverse(isawesome);

  printf ("main: computerscience: %s\n", computerscience );
  //  string_reverse("Renn");
  //  string_reverse("Michael");
  char new[] = "Michael";
  string_reverse(new);
  char new2[] = "even";
  string_reverse(new2);
  return 0;
}

void string_reverse (char str[]){

  int length = strlen(str); //does not include null
  int i;
  char a, temp;
  printf("Original String: %s\n", str);
  printf("Length of sting is %d\n", length);
  for(i= 0; i<length/2; i++)
    {
      temp = str[i];
      str[i] = str[length-i-1];
      str[length-i-1] = temp;
    }
  printf("Reversed string:%s\n", str); 

}//string_reverse
