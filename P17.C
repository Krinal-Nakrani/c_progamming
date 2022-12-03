#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,min;

	clrscr();

	printf("Enter value of 3 characters :\n\ta : ");
	scanf("%d",&a);

	printf("\n\tb : ");
	scanf("%d",&b);

	printf("\n\tc : ");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		printf("\n\nMaximum number is a : %d ",a);
	}
	else if(b>a && b>c)
	{
		printf("\n\nMaximum number is b : %d ",b);
	}
	else
	{
		printf("\n\nMaximum number is c : %d ",c);
	}

	getch();
}