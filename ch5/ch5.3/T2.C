#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter value for a :");
	scanf("%d",&a);
	printf("Enter value for b :");
	scanf("%d",&b);
	printf("Enter value for c :");
	scanf("%d",&c);
	(a<b)
		?(a<c)
			?printf("A is minimum")
			:printf("C is minimum")
		:(b<c)
			?printf("B is minimum")
			:printf("C is minimum");



	getch();
}

