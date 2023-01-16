/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n>0)
    printf("%d is positive.",n);
    else if(n<0)
    printf("%d is negative.",n);
    else
    printf("Number is zero.");
}
