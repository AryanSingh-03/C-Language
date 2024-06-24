#include<stdio.h>
#include<string.h>

int main() {
	
	// string -> array of character, collection of character
	// char -> 'a', '1'
	
	// string.h <- library
	
	// puts() <- to print string in console
	// gets() <- to get input from the user
	
	char name[10];// { R, a, j, , , , , }
	
	printf("enter name : ");
	gets(name);
	puts(name);
	
	// string length find
	// null name[i]
	// '\0' <- null, fie
	int i,length = 0;
	for(i=0; name[i]!='\0';  i++)
	{
		length++;
	}
//	int x = strlen(name); // to find length of the string
//	printf("%d\n",x);
//	printf("string length -> %d",length);
	
	// fname
	// lname
	// akhil
	// Akhil
	// AKHIL
	// 1. to capital
	// (a,k,H,i,l)
	
//	for(i=0; i<length; i++)
//	{
//		if(name[i]>=65 && name[i]<=90)
//		{
//			name[i] = name[i] + 32;
//		}
//	}

//	strupr(name);	// to convertc string into uppercase
//	strlwr(name); // to convert string into lower case
	
	// toggle case -> Toggle case....
	// title case -> Title Case...
	// cammle case -> new_variable
	
//	if(name[0]>=90 && name[0]<=122)
//	{
//		name[0] = name[0] -32;
//	}
//	
//	for(i=0; i<length; i++)
//	{
//		if(name[i]==' ')
//		{
//			if(name[i+1]>=90 && name[i+1]<=122)
//			{
//				name[i+1] -= 32;
//			}
//		}
//	}
//	

	// gmail and password
	
	// find string numeric
	// akhil12
	int check = 0;
	for(i=0; i<length; i++)
	{
		if(name[i]>='0' && name[i]<='9')
		{
			check = 1;
		}
	}
	
	if(check==1)
	{
		printf("number not allowed...");
	}
	else
	{
		puts(name);
	}
	
	
	
    
}

