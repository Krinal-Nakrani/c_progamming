#include <stdio.h>
// #include<conio.h>

void swap(int x, int y)
{
	int z;
	z = x;
	x = y;
	y = z;
	printf("\nValue after swapping \n x = %d \n y = %d", x, y);
}

int main()
{
	int a, b;
	// clrscr();

	printf("Enter value\n a : ");
	scanf("%d", &a);

	printf("\n b : ");
	scanf("%d", &b);

	swap(a, b);

	return 0;
	// getch();
}