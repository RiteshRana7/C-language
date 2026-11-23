//wap to second to hh:mm:ss.
#include<stdio.h>
#include<conio.h>
void main()
{
	
	int secounds;
	int hour;
	int minuts;
	int second;
	
	printf("Enter tha number of secounds :");
	scanf("%d",&secounds);
	
	hour = (secounds / 3600);
	minuts = (secounds % 3600) / 60;
	second = (secounds % 60);
	
	printf(" total hour minuts and secounds =  %d hour :%d minuts :%d secound",hour,minuts,second); 
	

	
	
} 
