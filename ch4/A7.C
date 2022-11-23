#include<stdio.h>
#include<conio.h>
main()
{

	int x,y,z,ans;
	clrscr();
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	printf("Enter value of z:");
	scanf("%d",&z);
	ans=(x*x) + (y*y) + (z*z)+ (2*(x*y))+(2*(y*z))+(2*(z*x));
	printf("Ans of (x+y+z)^2 =%d",ans);
	getch();


}


