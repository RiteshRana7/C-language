//Q3. Triangle Angle Finder .

#include<stdio.h>
#include<conio.h>

void main()
{
	int firstAngle;
	int secondAngle;
	int thirdAngle;
	
	printf("First angle :");
	scanf("%d",&firstAngle);
	
	printf("seecond angle :");
	scanf("%d",&secondAngle);
	
	thirdAngle = 180 - (firstAngle + secondAngle);
	
	printf("Third angle : %d",thirdAngle);
}
