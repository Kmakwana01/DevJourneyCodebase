#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int age =22;
	int *ptr=&age;
	int _age=*ptr;
	//valid
	printf("%d",age);
	printf("\n%d",*ptr);
	printf("\n%d",*(&age));
getch();
}