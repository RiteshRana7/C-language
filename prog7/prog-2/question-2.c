//WAP to check number is positive, negative or neutral using nested if else.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number;
	
	printf("Enter value of number :");
	scanf("%d",&number);
	
	if(number>=1)
	{
		printf("This is positive number :");
	}
	else if(number<0)
	{
		printf("this is negative number : ");
	}
	else if(number==0)
	{
		printf("This is neutral number :");
	}
	
}
