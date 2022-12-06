#include<stdio.h>
#include<conio.h>
main()
{
	int i=2000;
	clrscr();
	printf("Leap years are :\n");
	do{
		if(i%4==0)
		printf("%d ",i);
		i++;

	}while(i<=3000);
	getch();

}