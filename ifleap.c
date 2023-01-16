/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int y;
    printf("Enter year:");
    scanf("%d",&y);
    if((y%4==0&&y%100!=0)||(y%400==0))
    printf("Leap year");
    else
    printf("Normal year");
}
