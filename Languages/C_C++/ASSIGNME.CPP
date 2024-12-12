#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=10;
a += 10;
printf("a+10 = %d\n",a);

a -= 5;
printf("a-5 = %d\n",a);

a *= 10;
printf("a*10 = %d\n",a);

a /= 10;
printf("a/10 = %d\n",a);
getch();
}