
#include <stdio.h>
int main() {
    int mark;
    printf("enter your marks in the rangr of 0 to 100\n");  
    scanf("%d",&mark);
    if(mark>=90&&mark<=100)
      printf("the student grade is O");
    else if (mark>=80&&mark<=89)
      printf("The student grade is A+"); 
    else if(mark>=70&&mark<=79)
      printf("The student grade is A"); 
    else if(mark>=60&&mark<=69)
      printf("the student grade is B");  
    else if(mark>=50&&mark<=59)
      printf("the student grade is C");
    else if(mark<50)
      printf("fail");  
   else   
      printf("invalid marks");
}
    