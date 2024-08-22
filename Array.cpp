#include<stdio.h>

 main ()

{
	int i,n;
	int a[5]={1,2,3,4,5};
	
	for (i=0;i<=4; i++)
	{
		printf("Enter a [%d]:",i);
		scanf("%d",& a[i]);
	}
	
	for(i=0;i<=4; i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}