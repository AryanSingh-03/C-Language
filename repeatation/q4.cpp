#include<stdio.h>
#include<conio.h>

main ()
{
	int i;
	int n=1;
	
	printf("Enter the value of i");
	scanf("%d",&i);
	
	while (i>=n)
	{
		if(i%2==1)
		{
			printf("%d ",i);
	     }
		i--;
     }
}