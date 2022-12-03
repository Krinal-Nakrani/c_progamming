#include<stdio.h>
#include<conio.h>
void main()
{
	float i=1;
	float sum=0;

	clrscr();

	while(i<=9)
	{
		sum = sum + (i/(i+1));
		i=i+2;
	}
	printf("\nSummation of given series : %f",sum);

	getch();
}
