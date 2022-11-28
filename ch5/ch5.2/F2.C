#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	printf("Enter value of d:");
	scanf("%d",&d);
	if(a>b)
	{
		if(a>c)
		{
		  if(a>d)
		  {
			printf("a is maximum");
		  }
		  else
		  {
		       printf("d is maximum");
		  }
		}
		else
		{
		  if(c>d)
		  {
			printf("c is maximum");
		  }
		  else
		  {
			printf("d is maximum");
		  }
		}

	}
	else
	{

		if(b>c)
		{
		  if(b>d)
		  {
			printf("b is maximum");
		  }
		  else
		  {
		       printf("d is maximum");
		  }
		}
		else
		{
		  if(c>d)
		  {
			printf("c is maximum");
		  }
		  else
		  {
			printf("d is maximum");
		  }
		}
	}
	getch();


}