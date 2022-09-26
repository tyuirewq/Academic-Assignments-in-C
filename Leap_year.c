/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int a;
  printf ("Enter the year :");
  scanf ("%d", &a);
  if (a % 4 == 0)
    {
      if (a % 100 == 0 && a % 400 != 0)         //checks year which is divisible by 100 but not 400
	printf ("Given number is not a leap year");
      else if (a % 400 == 0 || a % 4 == 0)      //checks yrs which is divisble by 400 or 4
	printf ("Given year is a leap year");

    }
  return 0;
}
