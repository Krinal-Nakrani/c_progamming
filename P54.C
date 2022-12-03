#include<stdio.h>
#include<conio.h>

int main()
{
	char j,i;

	for(i='A' ; i<='E' ; i++)
	{
		for(j='A' ; j<=i ; j++)
		{
			printf("%c\t",j);
		}
		printf("\n\n");
	}
	return 0;
}