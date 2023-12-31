#include<stdio.h>

int main() 
{
 
 printf("In this programm you will learn to calculate the area of rectangle\n");

 int x ,y ;

 printf("\nEnter the lenght of rectangle\n");
 scanf("%d", &x);



 printf("Enter the breadth of rectangle\n");
 scanf("%d", &y);


 int area;
 area = x*y;
 
 printf("Area of the rectangle is : %d\n", area);

 return 0;

} 
