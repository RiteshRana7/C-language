 // wap to calculate grade based on percentage of 5 subjects of 100 marks.
 
 #include<stdio.h>
 #include<conio.h>
 
 void main()
 {
 	float hindi, english, math, science,marathi;
 	float percentage;
 	
 	printf("------------Enter your subjects marks !------------\n\n");
 	
 	printf("Enter marks of hindi :");
 	scanf("%f",&hindi);
 	
 	printf("Enter marks of english :");
 	scanf("%f",&english);
 	
 	printf("Enter marks of math :");
 	scanf("%f",&math);
 	
 	printf("Enter marks of scince :");
 	scanf("%f",&science);
 	
 	printf("Enter marks of marathi :");
 	scanf("%f",&marathi);
 	
 	
 	percentage = (hindi+english+math+science+marathi)/5;
 	
 	printf("your percentage is : %.2f%%\n\n",percentage);
 	
 	
 	if(percentage >=91 && percentage <=100)
 	{
 		printf("Your Grad  A !");	
	}
	
	else if(percentage >= 81 && percentage <=90)
	{
		printf("Your Grad B+ !");
	}
	
	else if(percentage >=71 && percentage <=80)
	{
		printf("Your Grad B !");
 	}
	
	else if (percentage >=61 && percentage <=70)
	{
		printf("Your Grad C+ !");	
	} 	
	
	else if(percentage >=51 && percentage <=60)
	{
		printf("Your Grad D+");
	}
	
	else if(percentage >=34 && percentage <=50 )
	{
		printf("Your Grad D");	
	} 	
	else
	{
		printf("You are faillllll");
	}
 }
