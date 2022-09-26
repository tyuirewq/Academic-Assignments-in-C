/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c = 0, d = 1;
    printf("Enter the Binary number :  ");
    scanf("%d",&a);
    do{
        b = (a%10) * 1;
        c++;
        a=a/10;
      }while(c =0);

    while (a!=0){
        d =d*2;
        b = b + (a%10)*d;
        a = a/10;
    }
    printf("\nDecimal value of given binary number is %d",b);
    return 0;
}
