#include <stdio.h>
int main()
{ /*this is the program to add two number using pointer*/
int a , b,*p,*q,sum;
printf("Enter the two integer   ");
scanf("%d%d",&a,&b);
p = &a;
q = &b;
sum = *p + *q;
printf("\nSum of two number is %d ", sum);

  return 0;
}

