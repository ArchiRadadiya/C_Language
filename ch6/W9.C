#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n,f=1,fact;
	clrscr();
	printf("Enter ending point : ");
	scanf("%d",&n);
	while(i<=n)
	{
		f = f * i;
		printf("%d\n",i);
		i++;
	}
	printf("Factorial : %d",f);
	getch();

}
