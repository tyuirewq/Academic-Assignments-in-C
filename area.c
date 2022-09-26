#include <stdio.h>

int main()
{
    float r,a,c;
    
    
    printf("Enter the radius of circle :");
    scanf("%f",&r);
    
    a = 3.141592 * r * r;
    c = 2 * 3.14 * r;
    
    printf("\nThe area of the circle :%0.2f",a);
    printf("\nThe circumference of the circle :%0.2f",c);
    return 0;
}
