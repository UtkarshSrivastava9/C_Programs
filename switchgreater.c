/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d\n%d",&a,&b);
    switch((a>b)+(a>=b))
    {
        case 2:
        printf("%d is greater.",a);
        break;
        case 1:
        printf("%d is equal to %d.",a,b);
        break;
        case 0:
        printf("%d is greater.",b);
        break;
    }
}
