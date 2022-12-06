#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Odd no.s are :\n");
	do{
		if(i%2==1)
		printf("%d\n",i);
		i++;

	}while(i<=n);
	getch();

}