#include<stdio.h>
#include<conio.h>
void printhw(int count);
int main()
{
clrscr();
printhw(10);
getch();
return 0;
}
void printhw(int count)
{
if(count==0)
{
return;
}
printf("hello world\n");
printhw(count-1);
}