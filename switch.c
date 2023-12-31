#include<stdio.h>

int main() 
{

 int age;

printf("enter  your age:");
scanf("%d", &age);

switch(age)
{

case 1:

printf("you sir are not eligible");

break;

case 19 :

printf("you are eliglible");

break;

default:

printf("waste of time");

}

return 0;

}
