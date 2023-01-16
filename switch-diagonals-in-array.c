/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of matrix");
    scanf("%d",&n);
    int i,j,a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Before swapping\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
            temp=a[i][j];
            a[i][j]=a[i][n-1-j];
            a[i][n-1-j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }
}
