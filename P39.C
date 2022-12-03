#include<stdio.h>
#include<conio.h>

void main()
{
	int i,sqr;
	clrscr();

	while(i!=1)
	{
		printf("\nEnter a number : ");
		scanf("%d",&i);

		sqr=i*i;
		printf("\nsqure of %d = %d",i,sqr);
	}

	getch();
}