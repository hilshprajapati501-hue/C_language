/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char choice;
    
    printf("r \n");
    printf("y \n");
    printf("g \n");
    
    printf("Enter your choice: \n");
    scanf("%c",&choice);
    
    switch(choice)
    {
        case 'r':
        case 'R':
        printf("STOP! The light is red");
        break;
        
        case 'y':
        case 'Y':
        printf("SLOW DOWN! The light is yellow");
        break;
        
        case 'g':
        case 'G':
        printf("GO! The light is green");
        break;
        
        default:
        printf("Invalid choice");
    }

    return 0;
}
