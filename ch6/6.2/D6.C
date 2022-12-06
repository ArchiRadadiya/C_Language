#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Even no.s are :\n");
	do{
		if(n%2==0)
		printf("%d\n",n);
		n--;

	}while(n>=i);
	getch();

}