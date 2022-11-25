#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter first number : ");
	scanf("%d",&a);
	if(a>0)
	{
	   printf("The no. is positive. ");
	}
	else if(a==0)
	{
	   printf("The no. is neutral. ");
	}
	else
	{
	   printf("The no. is negative.");
	}
	getch();
}





