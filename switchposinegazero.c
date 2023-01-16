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
    switch((n>0)+(n>=0))
    {
        case 1:
        printf("%d is equal to 0.",n);
        break;
        case 2:
        printf("%d is positive.",n);
        break;
        case 0:
        printf("%d is negative",n);
    }
}
