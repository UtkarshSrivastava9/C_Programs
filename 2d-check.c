/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,m;
    int a[n][m],b[n][m];
    printf("Enter rows and columns\n");
    scanf("%d%d",&m,&n);
    printf("First array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Second array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==b[i][j])
            {
                printf( "are equal");
                break;
            }
            else
            {
             printf("are not equal");
             break;
            }
        }
        break;
    }
    
}
