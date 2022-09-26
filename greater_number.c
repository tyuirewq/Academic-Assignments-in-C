/******************************************************************************

This program is to identify which number is greater among two given intergers 

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int a, b;
  printf ("Enter the integer number 1 :");
  scanf ("%d",&a);

  printf ("\nEnter the integer number 2 :");
  scanf ("%d",&b);
  
  if ( a-b ==0) printf("\nThe given number are equals");
 
 else
  a-b <0 ? printf("\nThe number 2 is greater then number 1 "): printf("\nThe number 1 is greater then number 2");
  
  
  return 0;
}

