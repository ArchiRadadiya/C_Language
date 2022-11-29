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
	printf("Enter value for e:");
	scanf("%d",&e);

	(a>b)
		?(a>c)
			?(a>d)
				?(a>e)
					?printf("A is maximum")
					:printf("E is maximum")
				:(d>e)
					?printf("D is maximum")
					:printf("E is maximum")
			:(c>d)
				?(c>e)
					?printf("C is maximum")
					:printf("E is maximum")
				:(d>e)
					?printf("D is maximum")
					:printf("E is maximum")
		:(b>c)
			?(b>d)
				(b>e)
					?printf("B is maximum")
					:printf("E is maximum")
				(d>e)
					?printf("D is maximum")
					:printf("E is maximum")
			:(c>d)
				(c>e)
					?printf("C is maximum")
					:printf("E is maximum")
				(d>e)
					?printf("D is maximum")
					:printf("E is maximum");


	getch();
}
