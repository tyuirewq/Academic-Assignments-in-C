/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  long int A, B, C;
  printf ("Enter the three number : ");
  scanf ("%ld%ld%ld", &A, &B, &C);

  if (C >= B && C >= A)
    printf ("%ld is the greatest number.", C);
  else if (B >= C && B >= A)
    printf ("%ld is the greatest number.", B);
  else
    printf ("%ld is the greatest number.", A);
  return 0;
}

