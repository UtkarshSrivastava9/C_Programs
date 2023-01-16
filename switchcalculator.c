/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
      char op;
  double a,b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);

  switch (op) {
        case '+':
        printf("Addition\n");
        printf("%lf+%lf=%lf",a,b,(a+b));
        break;
        case '-':
        printf("Subtraction\n");
        printf("%lf-%lf=%lf",a,b,(a-b));
        break;
        case '*':
        printf("Multiplication\n");
        printf("%lf*%lf=%lf",a,b,(a*b));
        break;
        case '/':
        printf("%lf/%lf=%lf",a,b,a/b);
    }
    return 0;
}
