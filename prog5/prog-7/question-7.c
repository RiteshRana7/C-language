//wap to convert temrature celcius into fahenhight.
#include<stdio.h>
#include<conio.h>
void main()
{
	 int celcius ;
	 float f;
	 
	 printf("Enter temprature of celcius :");
	 scanf("%d",&celcius);
	 
	 f  = (celcius * 9/5) + 32;
	 
	 printf("fahenhight of celcius = %.0f",f);
}
