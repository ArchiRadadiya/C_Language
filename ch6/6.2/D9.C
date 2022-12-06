#include<stdio.h>
#include<conio.h>
main()
{
	long long int i=1,fact=1,n;
	clrscr();
	printf("Enter a no. : ");
	scanf("%lld",&n);
	do{
		printf("%lld ",i);
		fact= fact*i;
		i++;

	}while(i<=n);
	printf("\nFactorial : %lld",fact);
	getch();

}