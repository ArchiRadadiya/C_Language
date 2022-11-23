#include<stdio.h>
#include<conio.h>
main()
{

	int x, y, ans;
	clrscr();
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	ans=(x*x) + (y*y) + (2*x*y);
	printf("Ans of (x+y)^2 =%d",ans);
	getch();


}


