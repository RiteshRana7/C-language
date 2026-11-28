//wap to find maximum from 4 number using nested if else ..

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	printf("Enter value of a :");
	scanf("%d",&a);
	
	printf("Enter value of b :");
	scanf("%d",&b);
	
	printf("Enter value of c :");
	scanf("%d",&c);
	
	printf("Enter value of d :");
	scanf("%d",&d);
	
	//a,b,c,d  
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum !");
			}
			else
			{
				printf("d is maximum !");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				printf("c is maximum !");
			}
			else
			{
				printf("d is maximum !");
			}
		}
	}
	else
	{
		// b,c,d
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum !");
			}
			else
			{
				printf("d is maximum !");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				printf("c is maximum !");
			}
			else
			{
				printf("d is maximum !");
			}
		}
	}
}
