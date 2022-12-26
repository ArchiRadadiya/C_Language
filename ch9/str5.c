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
		if(i==0)
		{
			str[i]-=32;		
		}
	}
	printf("Name in Titlecase is : %s",str);
}
