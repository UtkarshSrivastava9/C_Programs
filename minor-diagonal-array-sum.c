/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
            if(i+j==m-1)
            s+=a[i][j];
        }
        printf("\n");
    }
    printf("%d ",s);
}
