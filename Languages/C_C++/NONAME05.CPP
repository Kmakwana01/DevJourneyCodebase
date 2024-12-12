#include<stdio.h>
#include<conio.h>
int fun();
int add();
int sub();
int multi();
int mod();
int div();

void main()
{
	clrscr();
	fun();
	getch();

}
int fun()
{
int n;
printf("enter the n:");
scanf("%d",&n);
switch(n)
{
case 1 : int add()
{
	int a,b,c;
	printf("enter a & b ::");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}break;
case 2 :int sub()
{
	int a,b,c;
	printf("enter a & b ::");
	scanf("%d%d",&a,&b);
	c=a-b;
	return c;
}break;
case 3 :int multi()
{
	int a,b,c;
	printf("enter a & b ::");
	scanf("%d%d",&a,&b);
	c=a*b;
	return c;
}break;
case 4 :int mod()
{
	int a,b,c;
	printf("enter a & b ::");
	scanf("%d%d",&a,&b);
	c=a%b;
	return c;
}break;
case 5 :int div()
{
	int a,b,c;
	printf("enter a & b ::");
	scanf("%d%d",&a,&b);
	c=a/b;
	return c;
}break;
return 0;
}
return 0;}