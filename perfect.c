/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 
    int num,i,count=0,n;
    scanf("%d",&n);
    num=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        count=count+i;
    }
    if(count==num)
    printf("Perfect %d",count);
    else
    printf("Not %d",count);
   return 0;
}
