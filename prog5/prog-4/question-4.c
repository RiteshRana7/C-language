// Wap to find area of triangle.

#include<stdio.h>
#include<conio.h>

void main()
{
	int base;
	int height;
	int area;
	
	printf("Enter value of base :");
	scanf("%d",&base);
	
	printf("Enter value of height :");
	scanf("%d",&height);
	
	area = 0.5 * base * height;
	
	printf("area of triangle = %d",area);	
	
} 
