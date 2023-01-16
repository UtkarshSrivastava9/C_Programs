/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][2],b[3][2];
    printf("Enter first arry\n");
    for(int i=0;i<3;i++)
    for(int j=0;j<2;j++)
    scanf("%d\n",&a[i][j]);
    printf("Enter second array\n");
    for(int i=0;i<3;i++)
    for(int j=0;j<2;j++)
    scanf("%d\n",&b[i][j]);
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
    printf("%d ",(a[i][j]-b[i][j]));
    printf("\n");
    }
}
