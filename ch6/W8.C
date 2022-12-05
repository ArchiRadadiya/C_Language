#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n,s = 0;
	clrscr();
	printf("Enter ending point : ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		s=s+i;
		i++;
	}
	printf("sum : %d",s);
	getch();

}
