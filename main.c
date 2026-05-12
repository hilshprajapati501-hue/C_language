/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char grade = 'c';
   float height = 6.5;
   int eng = 65;
   float state = 54;
   int acc = 78;
   float bst = 64;
   float pct = 68.45;
    
    scanf("%c",&grade);
    scanf("%f",&height);
    scanf("%d",&eng);
    scanf("%f",&state);
    scanf("%d",&acc);
    scanf("%f",&bst);
    scanf("%f",&pct);
    printf("grade %c, height%3f, eng %d, state %f, acc %d, bst %f, pct %f",grade,height,eng,state,acc,bst,pct);
    return 0;
}