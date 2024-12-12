#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
long int a,b,c;
printf("enter the amount");
scanf("%ld",&a);
printf("enter the year");
scanf("%ld",&b);
printf("enter the rate");
scanf("%ld",&c);
int result=a*b*c/100;
printf("result is %ld ",result);

getch();
}