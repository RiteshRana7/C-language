//wap to convert meter into km.
#include<stdio.h>
#include<conio.h>

void main()
{
	int meter;
	int km;
	
	printf("Enter value of meter :");
	scanf("%d",&meter);
	
	km = meter/1000;
	
	printf("km of meter = %d",km);
}

