/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n2,low,lcm=1;
    scanf("%d %d",&n1,&n2);
    low=n1>n2?n1:n2;
    while(1)
    {
        if((low%n1==0)&&(low%n2==0))
        {
        lcm=low;
        break;
        }
        low++;
    
}
printf("\n%d\n",lcm);
}
