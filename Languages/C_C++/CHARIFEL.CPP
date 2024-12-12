#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter the charctor===");
scanf("%c",&ch);
if(ch>='a'&& ch<='z')
{
printf("%c is lower charactor",ch);
}
else if(ch>='A' && ch<='Z')
{
printf("%c is upper charctor",ch);
}
else
{
printf("NOT A CHAR.....");
}
getch();
}

