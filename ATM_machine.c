/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    
    printf("1.Deposits\n");
    printf("2.Withdrawl\n");
    printf("3.Balance\n");
    printf("4.Money transfer\n");
    printf("5.Card options\n");
    
    printf("Enter your choices:\n");
    scanf("%d", &choice);
    
    
    switch(choice)
    {
        case 1:
        printf("Deposite the value \n");
        break;
        
        case 2:
        printf("Withdrawl the amount of cash \n");
        break;
        
        case 3:
        printf("Check the amount of balance you have \n");
        break;
        
        case 4:
        printf("The money you had transfer \n");
        break;
        
        case 5:
        printf("Thank you for choosing debit and credit card options \n");
        break;
        
        default:
        printf("Invalid choice");
        
    }
    return 0;
}
