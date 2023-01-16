/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        scanf("%d\n",&a[i][j]);
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}
