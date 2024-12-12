#include<stdio.h>
#include<conio.h>
void square(int n);
void _square(int *n);
void main()
{
		clrscr();
		int number=4;
		_square(&number);
		printf("n is %d\n",number);
		getch();
}
void square(int n)
{
		n=n*n;
		printf("n is %d\n",n);
}
void _square(int *n)
{
		*n=*n * *n;
		printf("square is %d\n",*n);
}