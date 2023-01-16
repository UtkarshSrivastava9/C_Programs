/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a[10];
    int s=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        s+=a[i];
    }
    printf("%d",s);
}
