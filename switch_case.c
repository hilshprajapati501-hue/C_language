/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    int b;
    int choice;
    
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    
    printf("Enter choice: \n");
    scanf("%d",&choice);
    
    printf("Enter first number:\n");
    scanf("%d",&a);
    
    printf("Enter second number:\n");
    scanf("%d",&b);
    
    switch(choice)
    {
        case 1:
            printf("Addition = %d\n",a+b);
            break;
        
        case 2:
            printf("Subtraction = %d\n",a-b);
            break;
        
        case 3:
            printf("Multiplication = %d\n",a*b);
            break;
        
        case 4:
            printf("Division = %d\n",a/b);
             break;
        
        default:
            printf("Invalid choice");
    }

    return 0;
}