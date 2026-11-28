//Wap to find maximum form 3 number using nested if else.

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
	
//		a,b,c
	if(a>b)
	{
		if(a>c)
		{
			printf("a is maximum number ");
		}
		else
		{
			printf("c is maximum number");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is maximum number");
		}
		else
		{
			printf("c is maximum number");
		}
	}
}
