#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	do{
		printf("%d\n",n);
		n--;

	}while(n>=i);
	getch();

}