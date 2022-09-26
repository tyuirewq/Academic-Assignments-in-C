#include <stdio.h>
int cal(char operator, double n1,double n2;) {

printf("Enter an operator (+, -, *, /): ");
scanf("%c", &operator);
printf("Enter two operands: ");
scanf("%lf %lf",&n1, &n2);
switch(operator)
{
case '+':
printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
break;
case '-':
printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
break;
case '*':
printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
break;
case '/':
printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
break;
// operator doesn't match any case constant +, -, *, /
default:
printf("Error! Invalid operator ");
}

}

int main(){
    cal();
    return 0;
}