#include<stdio.h>
int main()
{
  int num;
  printf("hey user enter any number\n");
  scanf("%d",&num);
  if (num>0)
    printf(" number (%d) is positive",num);
  else if (num<0)
    printf("number(%d) is negative",num); 
  else
    printf("number is zero");  
 } 
    