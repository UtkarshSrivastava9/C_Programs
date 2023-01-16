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
    if(n%5==0&&n%11==0)
    printf("%d is divisible by both 5 and 11.",n);
    else if(n%5==0&&n%11!=0)
    printf("%d is divisible by 5 but not divisible by 11.",n);
    else if(n%5!=0&&n%11==0)
    printf("%d is divisible by 11 but not divisible by 5.",n);
    else
    printf("%d is neither divisible by 5 nor 11.",n);
}
