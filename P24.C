#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();

	printf("Enter any character : ");
	scanf("%c",&c);

	if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u')
	{
		printf("\nGiven character is vowel !");
	}
	else
	{
		printf("\nGiven character is not vowel !");
	}

	getch();
}