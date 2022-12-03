#include<stdio.h>
#include<conio.h>
void main()
{
	long n;
	clrscr();

	printf("Enter a  number :");
	scanf("%ld",&n);

	if(n<0)
	{
		printf("\nGiven number is nagetive !");
	}
	else if(n>0)
	{
		printf("\nGiven number is positive !");
	}
	else
	{
		printf("\nGiven number is zero 0 !");
	}

	getch();
}