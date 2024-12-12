#include<stdio.h>
#include<conio.h>
void main()
{
long p,q,r,si;
clrscr();
printf("%lf",3000.0/1825);
printf("enter the amount : ");
scanf("%ld",&p);

printf("enter the rate % : ");
scanf("%ld",&q);

printf("enter the year : ");
scanf("%ld",&r);

si=(p*q*r)/100;

printf("%ld",si);

getch();
}