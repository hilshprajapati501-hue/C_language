/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age = 18;
    int num = 21;
    
        scanf("%d",&age ,&num);
    
    if(age>=18)
    {
        if(age>=21)
        {
            printf("Elegible for voting and driving");
        }
        else 
        {
            printf("Elegible for voting only");
        }
        
    }
    else
    {
            printf("Not elegible");
    }

    return 0;
}
