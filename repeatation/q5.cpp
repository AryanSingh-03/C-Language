#include<stdio.h>
#include<conio.h>

main ()
{
	int i;
	int n;
	
	printf("Enter the value of i");
	scanf("%d",&i);
	
	printf("Enter the value of n");
	scanf("%d",&n);
	while (i<=n)
	{
		if(i%4==1)
		{
			printf("%d\n\n ",i);
	     }
		i++;
     }
}