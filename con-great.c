/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("%d is greater",a>b?a:b);
}
