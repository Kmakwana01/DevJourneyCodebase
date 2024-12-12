#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n,si;
	float day,amount;
clrscr();
	printf("enter tme amount\n");
	scanf("%d",&p);

	printf("enter the rate\n");
	scanf("%d",&r);

	printf("enter the year\n");
	scanf("%d",&n);

	si=p*r*n/100;
	printf("amount==%d",si);

	amount=si/12;
	printf("\none month amount==%f",amount);

	day=amount/30;
	printf("\none day amount==%f",day);

getch();
}