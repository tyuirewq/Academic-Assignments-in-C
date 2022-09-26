/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a ;
    float b;
    
    printf("Enter the number of term : ");
    scanf("%d",&a);
    
    b = (a * a + a) / 2 ;
    
    printf("The sum of fist n natural number is : %0.1f", b);
    
    return 0;
}
