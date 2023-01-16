/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,j=1,a[100],max=0,min=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
         for(int i=0;i<n;i++)
         {
             if(i==0)
             {
                 min=a[i];
                 max=a[i];
             }
             else if(i>0)
             {
                 if(min>a[i])
                 min=a[i];
                 if(max<a[i])
                 max=a[i];
             }
             
    }
    printf("Min=%d Max=%d",min,max);
}
