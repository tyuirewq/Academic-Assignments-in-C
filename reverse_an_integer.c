/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a, c;
  int b = 0;  // counts the number of factors of given number
  printf ("Enter the number : ");
  scanf ("%d", &a);
  for (c = 1; c <= a; c++)
    {
      if (a % c == 0)
	{
	  b++;
	}

    }
  if (b == 2)
    printf ("Given number is a prime ");
  else
    printf ("Given number is not a prime number");
  return 0;
}
