/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,m,s=0;
    
    printf("Enter rows and columns\n");
    scanf("%d%d",&m,&n);
    int a[n][m];
    printf("First array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            s+=a[i][j];
        }
        printf("\n");
    }
    printf("%d ",s);
}
