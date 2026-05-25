/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float per;
    printf("Enter Percentage:");
    scanf("%f", &per);
    
    if(per>=90)
        printf("Grade A+: Excellent");
    else if(per>=80)
        printf("Grade A: Very Good");
     else if(per>=70)
        printf("Grade B: Good");
     else if(per>=60)
        printf("Grade C: Average");
     else if(per>=40)
        printf("Grade D: Pass");
     else
        printf("Grade F: Fail");
    return 0;
}
