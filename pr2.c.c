#include<stdio.h>
#include<conio.h>

void main()

{
	int marks;
	char grade;
	printf("Enter your marks:");
	scanf("%d",&marks);
	
	(marks>=80 && marks<=100)?grade='A':
		
	(marks>=70 && marks<=80)?grade='B':
		
	(marks>=50 && marks<=70)?grade='C':
		
	(marks>=30 && marks<=50)?grade='D':
		
	(marks>=0 && marks<=30)?grade='F':
		
	printf("Enter the valid marks");
	
	
	
	switch(grade)
	{
		case 'A':printf("Your grade is A. Excellent work!");
		break;
		
		case 'B':printf("Your grade is B. Well done!");
		break;
		
		case 'C':printf("Your grade is C. Good job!");
		break;
		
		case 'D':printf("Your grade is D. You passed, but you could do better!");
		break;
		
		case 'F':printf("Your grade is F. Sorry, you failed!");
		break;
	}
	
	if(grade=='A'||grade=='B'||grade=='C'||grade=='D')
	{
		printf("Congratulations! You are eligible for the next LeveL");
		
	}
	else if(grade=='F')
	{
		printf("Please try again next time");
	}
}