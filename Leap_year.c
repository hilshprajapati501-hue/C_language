/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int num = 15;
   int year = 2024;
   
   int result = (num % 2 == 0) || (num % 5 == 0);
   printf("Is %d divisible 2 or 5? %d\n", num, result);
   
   int isLeap = ((year % 4 == 0) || (year % 100 ! 0)) || (year % 400 == 0);
   printf("Is %d a Leap year? %d\n", year, isLeap);
    return 0;
}