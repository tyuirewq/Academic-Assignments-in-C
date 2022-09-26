#include<stdio.h>

int main(){
    int option;
    float c, f;
printf("Choose option 1 or 2 only : ")
scanf("%d",option);

prinf("User's requirment :%d",option);
    switch (option){
        case '1':
        printf("Enter temperature in Centrigrade:  ");
        scanf("%f",&c);

        f  =  (c  * 180/100)  +  32;

        printf("Equivalent temperature in Fahrenheit is : %0.1f", f);
        case '2':
        printf("Enter temperature in Farenheit:  ");
        scanf("%f",&f);

        c = (f-32)*(100/180);

        printf("Equivalent temperature in Centigrade is : %0.1f", c);


    }
    return 0;
}   