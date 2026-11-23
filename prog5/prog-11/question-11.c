 // wap to calculate age based on birthdate.(date,month,year)
 #include<stdio.h>
 #include<conio.h>
 
 void main()
 {
 	int year,month,date;
 	int currentYear = 2026 , currentMonth = 11 , currentDate = 26;
 	
 	printf("Enter your Date of Birth :");
 	scanf("%d",&date);
 	
 	printf("Enter your  Month :");
 	scanf("%d",&month);
 	
 	printf("Enter your year : ");
 	scanf("%d",&year);
 	
 	printf("total years =  %d\n", currentYear - year);
 	printf("total months =  %d\n", currentMonth - month);
 	printf("total days = %d", currentDate - date);
 	
 }
