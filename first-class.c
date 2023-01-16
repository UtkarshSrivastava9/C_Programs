#include<stdio.h>
void main()
{
     int a=5,b=10,c,d,e,f,g;
     c=a+b;
     d=b-a;
     e=b/a;
     f=b*a;
     g=a;
     a=b;
     b=g;
     printf("Before swapping value of a=%d,b=%d\n",a,b);
     printf("a=%d\tb=%d\tc=%d\td=%d\te=%d\tf=%d\n",a,b,c,d,e,f);
     printf("a=%d,b=%d",a,b);
}