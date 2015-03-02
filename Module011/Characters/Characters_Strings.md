# Commentary on lab for Characters and Strings

-> How are strings stored in main memory?
- The compiler usually allocates space in reverse order

-> How do their addresses relate?

When we run the program string-intro.c several times, we see (only printing
the relavant section).

Run 1:
Variable addresses and array base addresses
   first address: 1344322344,   array base address: 1344322344
  second address: 1344322338,   array base address: 1344322338
   third address: 1344322352,   array base address: 1344322352
  fourth address: 1344322328,   array base address: 1344322338
   fifth address: 1344322320,   array base address: 262098326

Run 2:
   first address: 1465117480,   array base address: 1465117480
  second address: 1465117474,   array base address: 1465117474
   third address: 1465117488,   array base address: 1465117488
  fourth address: 1465117464,   array base address: 1465117474
   fifth address: 1465117456,   array base address: 141303190

-> We see the absolute addresses change, but thier relationships to eachother
	do not.

Adding the line
first[3] = second[3] = third[3] = 0;
Sets the 4th character in each string to the null characer, and so when 
we print it, the strings terminate at the third character. Notice also that
because string 4 points to string 3, it is also truncated.
output:
first 3 characters in each array
   first: Col
  second: Wor
   third: Com
  fourth: Wor
   fifth: Hel
Variable addresses and array base addresses
   first address: 1597238056,   array base address: 1597238056
  second address: 1597238050,   array base address: 1597238050
   third address: 1597238064,   array base address: 1597238064
  fourth address: 1597238040,   array base address: 1597238050
   fifth address: 1597238032,   array base address: 9182614
variables printed as strings
   first: Col
  second: Wor
   third: Com
  fourth: Wor
   fifth: Hello

-> inserting fifth[3] = 0;
