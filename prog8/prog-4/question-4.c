 // wap to find maximum from 5 numbers using nested if else.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;
	
	printf("Enter value of a :");
	scanf("%d",&a);
	
	printf("Enter value of b :");
	scanf("%d",&b);
	
	printf("Enter value of c :");
	scanf("%d",&c);
	
	printf("Enter value of d :");
	scanf("%d",&d);
	
	printf("Enter value of e :");
	scanf("%d",&e);
	
	// a,b,c,d,e
	if(a>b)
	{
		//a,c,d,e
		if(a>c)
		{
			//a,d,e
			if(a>d)
			{
				//a.e
				if(a>e)
				{
					printf("a is maximum !");
				}
				else
				{
					printf("e is maximum !");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					printf("d is maximum !");
				}
				else
				{
					printf("e is maximum !");
				}
			}
		}
		else
		{
			//c,d,e
			if(c>d)
			{
				//c,e
				if(c>e)
				{
					printf("c is maximum !");
				}
				else
				{
					printf("e is maximum !");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					printf("d is maximum !");
				}
				else
				{
					printf("e is maximum !");
				}
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b>c)
		{
			//b,d,e
			if(b>d)
			{
				//b,e
				if(b>e)
				{
					printf("b is maximum !");	
				}
				else
				{
					printf("e is maximum !");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					printf("d is maximum !");
				}
				else
				{
					printf("e is maximum !");
				}
			}
		}
		else
		{
			//c,d,e
			if(c>d)
			{
				//c,e
				if(c>e)
				{
					printf("c is maximum !");
				}
				else
				{
					printf("e is maximum !");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					printf("d is maximum !");
				}
				else
				{
					printf("e is maximum !");
				}
			}
		}	
	}
}
