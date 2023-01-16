/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,y;
    printf("Enter number between 1 and 12: and Enter year:\n");
    scanf("%d",&n);
    scanf("%d",&y);
    switch(n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("31 days.");
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("30 days.");
    break;
    case 2:
    if((y%4==0&&y%100!=0)||y%400==0)
    printf("29 days.");
    else
    printf("28 days.");
    break;
    default:
    printf("Enter month between 1 and 12.");
    }
}
