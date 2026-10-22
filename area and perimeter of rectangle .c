#include<stdio.h>
int main()
{
  float length,breadth,area,perimeter;
  printf("enter the length of the rectangle\n");
  scanf("%f",&length);
  printf("enter the breadth of the rectangle\n");
  scanf("%f",&breadth);
  area = length*breadth;
  perimeter = 2*(length + breadth);
  printf("the area and perimeter of the rectangle are %f and %f",area,perimeter);
 }
    