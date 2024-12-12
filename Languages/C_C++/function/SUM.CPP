#include<stdio.h>
#include<conio.h>
int sum();
int main()
{
	clrscr();
	printf("sum is %d",sum());
	getch();
	return 0;

}
int sum()
{
	int a,b,sum;
	printf("enter the a & b:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;
}