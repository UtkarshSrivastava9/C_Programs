/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a[2][2],b[2][2],c[2][2];
    printf("Enter first arry\n");
    for(int i=0;i<2;i++)
    {
    for(int j=0;j<2;j++)
    scanf("%d",&a[i][j]);
    }
    printf("Enter second array\n");
    for(int i=0;i<2;i++)
    {
    for(int j=0;j<2;j++)
    scanf("%d",&b[i][j]);
    }
    for(int i=0;i<2;i++)
    {
    for(int j=0;j<2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d ",c[i][j]);
    }
   
    printf("\n");
    }
}
