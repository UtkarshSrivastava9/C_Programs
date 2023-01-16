/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 
    int space=20;
    for(int i=1;i<=7;i++)
    {
        for(int j=i;j<7;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        
      printf("\n");
    }
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=6;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
        printf("*");
            
        }
        printf("\n");
    }
}
