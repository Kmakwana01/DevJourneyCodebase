#include<stdio.h>
#include<conio.h>
void main()
{
int a=5;
int b=7;
clrscr();

printf("enter the numbers;");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
getch();
}
