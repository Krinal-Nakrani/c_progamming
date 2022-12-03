#include<stdio.h>
#include<conio.h>
void main()
{
	long n;

	clrscr();

	printf("Enter any number : ");
	scanf("%ld",&n);

	if(n%3==0)
	{
		printf("\nGiven number is divisable by 3 ");
	}
	else
	{
		printf("\nGiven number is not divisable by 3 !!!");
	}

	getch();
}