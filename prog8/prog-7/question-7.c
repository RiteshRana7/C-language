//wap to check number is even or odd using if else without using %.

#include<stdio.h>
#include<conio.h>

void main()
{	       
	int number;
	int result;
	
	printf("Enter any number :");
	scanf("%d",&number);
	
	result = number/2 ; 					     // 10 / 2 = 5        
	if(result * 2 == number)  					 // 5 * 2 = 10   10-10 = 0  Even Number
	
	{											 // 11 / 2 = 5
		printf("This is even number !");		// 5 * 2 = 10      11-10 = 1   Odd Number
	}
	else
	{
		printf("This is odd number !");
	}
	
	
	
}
