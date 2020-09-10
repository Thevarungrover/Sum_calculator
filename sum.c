#include<stdio.h>
int a=0,b=0; // global variables 
addition(); // function prototype
main() // main function
{

	printf("Enter two numbers to get their sum :");
	scanf("%d %d",&a, &b); // getting 2 numbers as input
	addition(); //function call
}
addition() // function declaration
{
	printf("\nSum = %d",a+b); // output - sum
}
