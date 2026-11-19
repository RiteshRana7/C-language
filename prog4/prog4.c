#include<stdio.h>
#include<conio.h>

void main()
{
// 1. swaping of two variables using third variable
	int a = 10;
	int b = 20;
	int c = a;
	
	a = b; 
	b = c;
	
	 printf("a = %d\n",a);
	printf("b = %d",b);
	
	printf("\n\n");
// 2. swaping of two variables without using third variable

	int d = 30;
	int e = 40;
	
	d = d + e; // d = 30 + 40;
	e = d - e; // e = 70 - 40 = 30;
	d = d - e; // d = 70 - 30 = 40;
	 
	
	
	printf("d = %d\n",d);
	printf("e = %d",e);
	
	printf("\n\n");
	
//3.swaping of two variables without using third variable and without using + and -.
	
	int g = 5;
	int h = 15;
	
	g = g ^ h;
	h = g ^ h;
	g = g ^ h;
	
	printf("g = %d\n",g);
	printf("h = %d",h);
	
	
}
