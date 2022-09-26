/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n, b = 0, i = 1;
  printf ("Enter your integer value :  ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      if (n % i == 0)
	{
	  b++;
	}
    }
  if (b == 2)
    {
      printf ("%d number is not composite number ", n);
    }
  if (b > 2)
    printf ("%d number is  a composite number", n);
  return 0;
}
