#include<stdio.h>
main()
{
	char a; 
	printf("Input any character : ");
	scanf("%c",&a);
	
	a-=32;
	
	printf("Character in UPPERCASE : %c ",a);
	
}
