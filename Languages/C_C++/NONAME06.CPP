#include<stdio.h>
#include<conio.h>
int add();
int sub();
int multi();
int mod();
int div();

void main()
{

	clrscr();
	printf("division is %d",div());
	getch();

}
int add()
{
	int a,b,c;
       printf("enter a & b ::");
       scanf("%d%d",&a,&b);

	c=a+b;
	return c;
}
int sub()
{
	int a,b,c;
	printf("enter a & b ::");
	scanf("%d%d",&a,&b);
	c=a-b;
	return c;
}
int multi()
{
	int a,b,c;
	printf("enter a & b ::");
	scanf("%d%d",&a,&b);
	c=a*b;
	return c;
}
int mod()
{
	int a,b,c;
	printf("enter a & b ::");
	scanf("%d%d",&a,&b);
	c=a%b;
	return c;
}
int div()
{
	int a,b,c;
	printf("enter a & b ::");
	scanf("%d%d",&a,&b);
	c=a/b;
	return c;
}