#include<stdio.h>
#include<conio.h>

void main()
{
	long n;
	int count=0;

	clrscr();

	printf("Enter five digitd nimber : ");
	scanf("%ld",&n);

	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("\nnumber of digits : %d",count);

	grtch();
}