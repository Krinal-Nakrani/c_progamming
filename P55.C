#include<stdio.h>
#include<conio.h>
int main()
{
    char i,j;
    clrscr();

    for(i='E' ; i>='A' ; i--)
    {
        for(j='A' ; j<=i ; j++)
        {
            printf("%c\t",j);
        }
        printf("\n\n");
    }
    getch();
}