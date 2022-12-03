#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();

	printf("Enter any character : ");
	scanf("%c",&c);

	if(c>=65 && c<=90)
	{
		printf("\ncharacter is UPPERCASE alfabate !");
	}
	else if(c>=97 && c<=122)
	{
		printf("\ncharacter is lowercase alfabate !");
	}
	else if(c>=48 && c<=57)
	{
		printf("\ncharacter is digit !");
	}
	else
	{
		printf("\ncharacter is non alfanumaric character !");
	}

	getch();
}