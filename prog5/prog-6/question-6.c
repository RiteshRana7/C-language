// wap to perimeter of circle.
#include<stdio.h>
#include<conio.h>

void main()
{
		float pi = 3.14;
		int r;
		float  perameter; 
		
		printf("Enter value of pi :");
		scanf("%f",&pi);
		
		printf("Enter value of r :");
		scanf("%d",&r);
		
		perameter = 2 * pi * r;
		
		printf("Peraimeter of circle = %.2f",perameter);
}
