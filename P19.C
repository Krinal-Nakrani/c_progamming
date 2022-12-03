#include<stdio.h>
#include<conio.h>
void main()
{
	long year,ly;

	clrscr();

	printf("Enter a year : ");
	scanf("%ld",&year);

	if(year%4==0)
	{
		printf("\nEntered year is leap year !");
	}
	else
	{
		printf("\nEntered year is not leap year !!!");
	}

	getch();
}