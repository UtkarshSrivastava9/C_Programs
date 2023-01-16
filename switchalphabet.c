/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter alphabet:");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'I':
        case 'i':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("Vowel");
        break;
        default:
        printf("Consonant");
    }
    }
    else
    printf("Enter an alphabet");
}
