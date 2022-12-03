#include<stdio.h>
#include<conio.h>

int main()
{       long sum=1;
	int i,n;

	

	printf("Enter a number : ");
	scanf("%d",&n);

	for(i=1 ; i<=n ; ++i)
	{
		sum *= i;
		printf("sum= %ld * %d \n ",sum,i);

	}
	printf("sum = %ld",sum);

	return 0;
}