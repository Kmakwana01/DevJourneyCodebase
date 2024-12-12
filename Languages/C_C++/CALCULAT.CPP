#include<stdio.h>
#include<conio.h>
int calcsquare(int n);
int main()
{
int n;
clrscr();
printf("enter the n : \n");
scanf("%d",&n);
printf("\nsquare is = %d ",calcsquare(n));
getch();
return 0;
}
int calcsquare(int n)
{
return n*n;
}
