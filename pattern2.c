/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
