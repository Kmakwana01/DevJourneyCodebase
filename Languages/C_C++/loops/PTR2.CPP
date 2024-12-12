#include<stdio.h>
#include<conio.h>
void main()
{           int *ptr,x;
clrscr();

	ptr=&x;
	*ptr=0;
	printf("%d",x);
	*ptr+=5;
	printf("\n%d",x);
	*ptr+=10;
	printf("\n%d",x);
	(*ptr)++;
	printf("\n%d",x);

getch();
}