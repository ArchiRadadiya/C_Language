#include<stdio.h>
#include<string.h>

main()
{
	int i;
	char str[20];
	
	printf("Enter your name : ");
	scanf("%[^\n]",&str);
	
	for(i=0; i<strlen(str); i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;		
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]-=32;		
		}
	}
	printf("Name in Titlecase is : %s",str);
}
