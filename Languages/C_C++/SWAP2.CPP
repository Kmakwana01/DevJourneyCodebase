#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
clrscr();

	printf("enter a\t");
	scanf("%f",&a);

	printf("enter b\t");
	scanf("%f",&b);

	a=a-b;//a == 10-20 ==a=10
	b=a+b;//b == 10+20 ==b=30
	a=b-a;//a == 30-10 ==a=20
	printf("a==%f\n",a);
	printf("b==%f\n",b);

getch();
}