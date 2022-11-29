
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter value for a :");
	scanf("%d",&a);
	printf("Enter value for b :");
	scanf("%d",&b);
	printf("Enter value for c :");
	scanf("%d%",&c);
	printf("Enter value for d :");
	scanf("%d",&d);
	(a>b)
		?(a>c)
			?(a>d)
				?printf("A is maximum")
				:printf("D is maximum")
			:(c>d)
				?printf("C is maximum")
				:printf("D is maximum")
		:(b>c)
			?(b>d)
				?printf("B is maximum")
				:printf("D is maximum")
			:(c>d)
				?printf("C is maximum")
				:printf("D is maximum");


	getch();
}
