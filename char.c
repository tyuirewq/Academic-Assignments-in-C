#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
 void functionality(void);
   int main(){
      
        char username[30] = "hariom";
        char password[12] = "hariom123";
        char by_user[15],by_pass[10];
        
        for(int h=0;h <= 2;h++){
            printf("\n\n\n           Enter Username      :   ");
            scanf("%s",&by_user);
            printf("\n\n           Enter Password      :    ");
            scanf("%s",by_pass); 
            if (strcmp(username,by_user) == 0 && strcmp(password,by_pass)  == 0){
            printf("\n\n\n\n\n\n:) :) :) :) :) :) :) :) :)  Login sucessful  :) :) :) :) :) :) :) :) :)");
            getchar();
            first_page();
            break;
            }
            if(h<=1) printf("\n\nEnter the correct username and password..................");
            
            else printf("\n\n.........You are entered to many wrong password..............\n\n...........You are not allowed to go further.............. ");} 
   return 0;
   }
    
    