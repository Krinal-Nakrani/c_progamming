#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i=0,sum=0,qub;

	clrscr();

	while(i<=10)
	{
		qub=pow(i,3);
		printf("\n\t\t qub of %d = %d",i,qub);
		sum=sum+qub;
		i++;
		printf("\n %d + %d \n",sum,qub);
	}
	printf("\tsumation of qube of 1 to 10 digits = %d",sum);

	getch();
}