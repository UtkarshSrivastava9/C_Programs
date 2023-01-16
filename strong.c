/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0,d=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int f=1;
        d=n%10;
        for(int j=1;j<=d;j++)
        {
            f=f*j;
        }
        sum=sum+f;
        n=n/10;
    }
    printf("%d",sum);
}
