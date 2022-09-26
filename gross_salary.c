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
  float bs = 12000, da, hr, gs;
  printf ("Basic salary is :%.2f\n", bs);
  da = bs * 4 / 10;
  printf ("Dearness allowance is :%.2f\n", da);
  hr = bs * 2 / 10;
  printf ("House rent is :%.2f\n", hr);
  gs = bs + hr + da;
  printf ("Gross salary is :%.2f\n", gs);


  return 0;
}
