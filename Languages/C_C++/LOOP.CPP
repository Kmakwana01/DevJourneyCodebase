#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the n = ");
scanf("%d",&n);
for(int i=1; i<=10; i++)
{
printf("%d\n",n*i);
}
getch();
}