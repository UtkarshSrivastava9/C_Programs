/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n2,a[100],b[100],c[200];
    scanf("%d %d",&n1,&n2);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
     printf("1st array\n");
     for(int i=0;i<n1;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        c[n1+i]=b[i];
    }
   
    printf("2nd array");
     for(int i=0;i<n2;i++)
    { 
        printf("%d ",b[i]);
    }
    printf("Final arrat\n");
    printf("{");
    for(int i=0;i<(n1+n2);i++)
    {
        printf("%d ",c[i]);
    }
    printf("}");
}


