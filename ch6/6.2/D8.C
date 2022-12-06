#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,sum=0,n;
	clrscr();
	printf("Enter a no. :");
	scanf("%d",&n);
	do{
		printf("%d ",i);
		sum+=i;
		i++;

	}while(i<=n);
	printf("\nSum : %d",sum);
	getch();

}