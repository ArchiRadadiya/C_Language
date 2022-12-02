#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();
	printf("Enter your choice : ");
	scanf("%c",&a);
	if(a>='A' && a<= 'Z')
	{
		printf("It is a capital alphabet.");
	}
	else if(a>='a' && a<='z')
	{
		printf("It is a small alphabet.");
	}
	else if(a>='0' && a<='9')
	{
		printf("It is a digit.");
	}
	else
	{
	printf("It is a special character.");
	}
	getch();
}








