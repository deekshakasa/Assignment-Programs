
#include <stdio.h>
int main() {
    int userID ,password;
    printf("enter the user ID\n");
    scanf("%d",&userID);
    printf("enter the password\n");
    scanf("%d",&password);
    if(userID==101){
       if(password==4321){
          printf("login successfully");
          }
       else{
          printf("incorrect password");   
          }
       }   
    else
       printf("user not found");  
}
    