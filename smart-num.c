#include <stdio.h>
#include <stdbool.h>
bool number(int num)
{
    int factors=0;
    for(int i=1;i<=(num+1);i++)
    {
        if(num%i==0)
        {
            factors++;
            if(factors%2==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    printf("%d",factors);
}
void main()
{
    bool k;
    int num;
    printf("Enter number to check:");
    scanf("%d\n",&num);
    k=number(num);
    if(k==true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("False\n");
    }
    
}