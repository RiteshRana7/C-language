//Wap to simple interest.
#include<stdio.h>
#include<conio.h>

void main()
{
	int p, t, r;
	int si;
	
	printf("Enter value of p :");
	scanf("%d",&p);
	
	printf("Enter value of t :");
	scanf("%d",&t);
	
	printf("Enter value of r :");
	scanf("%d",&r);
	
	si = (p * t * r) /100;
	
	printf("value of intrest = %d",si);	
}
