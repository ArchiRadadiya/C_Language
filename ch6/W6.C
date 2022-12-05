#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n;
	clrscr();
	printf("Enter ending point : ");
	scanf("%d",&n);
	while(n>=i)
	{
	if(n%2==0)
	{
		printf("%d\n",n);
	}
		n--;

	}
	getch();

}
