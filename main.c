/******************************************************************************

program to find the sum of 5 subjects marks and its percentage

*******************************************************************************/
#include <stdio.h>

int main()
{
    int S1,S2,S3,S4,S5,Sum;
    float Percentage,TM;
    
    printf("Enter the marks obtains in subject 1 :");
    scanf("%d",&S1);
    printf("\nEnter the marks obtains in subject 2 :");
    scanf("%d",&S2);
    printf("\nEnter the marks obtains in subject 3 :");
    scanf("%d",&S3);
    printf("\nEnter the marks obtains in subject 4 :");
    scanf("%d",&S4);
    printf("\nEnter the marks obtains in subject 5 :");
    scanf("%d",&S5);
    printf("\nEnter the total marks of all subjects :");
    scanf("%f",&TM);
    Sum = (S1+S2+S3+S4+S5);
    
    Percentage = (Sum * 100)/TM;
    printf("\nMarks obtained is %d\nAnd Percentage is %0.1f", Sum ,Percentage);

    return 0;
}

