#include<stdio.h>
#include<conio.h>

int main()

{
	float x,y,z;
	printf("Enter your marks maths: ");
    scanf("%f",&x);
    
	printf("Enter your marks english:");
	scanf("%f",&y);
	
	printf("Enter your marks science: ");
	scanf("%f",&z);
	
	if(x>100)
	{
    printf("your marks not valid");
	}
    else if(x<0)
	{
	printf("your marks not valid");
	}
	else if(y>100)
	{
    printf("your marks not valid");
	}
	else if(y<0)
	{
	printf("your marks not valid");
	}
	else if(z>100)
	{
    printf("your marks not valid");
	}
	else if(z<0)
	{
	printf("your marks not valid");
	}
	
printf("Average Mark=%.2f",(x+y+z)/3);
	
}