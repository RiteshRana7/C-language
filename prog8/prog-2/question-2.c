//wap to find minimum from 3 numbers using nested if else.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("Enter value of a :");
	scanf("%d",&a);
	
	printf("Enter value of b :");
	scanf("%d",&b);
	
	printf("Enter value of c :");
	scanf("%d",&c);
	
	//	a,b,c
	if(a<b)
	{	//a,c
		if(a<c)
		{
			printf("a is minimum !");
		}
		else
		{
			printf("c is minimum !");
		}
	}
	else
	{	//b,c
		if(b<c)
		{
			printf("b is minimum !");
		}
		else
		{
			printf("c is minimum !");
		}
	}
	
	
	
}              


