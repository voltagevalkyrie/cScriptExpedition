#include<stdio.h>
#include<stdbool.h>
 
int main() 
{

int yourAge;

int reqAge;
reqAge = 19;

printf("Enter your age to check if you are eligile for this\n");
scanf("%d", &yourAge);


if(yourAge < reqAge) 
{

printf("not eligible bruh");

}

else
{

printf("ok ok you can use this software");

}

return 0;

}