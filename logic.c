/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int a;

  printf ("Enter the number :");
  scanf ("%d", &a);

  if ( (a % 2 != 0) || (a/2 ==1)
  
  
 || (a % 3 != 0)  || (a/3 ==1))
  
  //|| (a % 5 != 0)  && (a/5 ==1) || (a % 7 != 0)  && (a/7 ==1) )
    {  printf ("\nThe given number is a prime number");

    }
 
  else
    printf ("\nThe given number is not a prime number");


  return 0;
}
