#include <stdio.h>
int main ()
{
char grade;
printf("Enter the Grade : ");
scanf("%c", &grade);
//printf("\nThe grade entered is : %c\n", grade);
switch(grade) {
case 'A' :
case 'a' :
printf("Excellent!\n" );
break;
case 'B' :
case 'b' :
case 'C' :
case 'c' :
printf("Well done\n" );
break;
case 'D' :
case 'd' :
printf("You passed\n" );
break;
case 'F' :
case 'f' :
printf("Better try again\n" );
break;
default :
printf("Invalid grade\n" );
}
printf("Your grade is %c\n", grade );
return 0;
}