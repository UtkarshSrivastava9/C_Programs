/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int a[100],o=0,e=0,b[100],c[100],n,j=0,k=0;
 scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
            b[j]=a[i];
            j++;
            continue;
        }
        else
        {
            o++;
            c[k]=a[i];
            k++;
            continue;
        }
    }
    printf("{");
    for(int i=0;i<e;i++)
    {
        printf("%d ",b[i]);
      
    }
    printf("}\n");
      printf("EVEN=%d\n",e);
      printf("{");
    for(int i=0;i<o;i++)
    {
        printf("%d ",c[i]);
      
    }
    printf("}\n");
      printf("ODD=%d",o);
}
