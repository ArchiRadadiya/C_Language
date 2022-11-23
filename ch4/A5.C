
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
	ans=(x*x*x) + (y*y*y) +(z*z*z)+ (3*(x+y)*(y+z)*(z+x));
	printf("Ans of (x+y+z)^3 =%d",ans);
	getch();


}

