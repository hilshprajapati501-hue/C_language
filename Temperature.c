/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tem;
    printf("Enter Temperature number:");
    scanf("%d", &tem);
    
    if(tem < 10) {
        printf("Temperature is cool \n");
    }
    else if(tem>=10 && tem<=25) {
        printf("Temperature is warm");
    }
    else if(tem> 25) {
        printf("Temperature is hot");
    }
    return 0;
}
