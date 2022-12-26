#include<stdio.h>
#include<string.h>

main()
{
	int i;
	char str[20];
	
	printf("Enter your name in UPPERCASE : ");
	scanf("%[^\n]",&str);
	
	for(i=0; i<strlen(str); i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;		
		}
	}
	printf("Name in lowercase is : %s",str);
}
