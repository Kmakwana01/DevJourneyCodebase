#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("enter the day: ");
scanf("%d",&day);

if(day<=2)
{
printf("marvel studio\n");
}
else if(day<=4)
{
printf("dc studio\n");
}

else if(day<=6)
{
printf("jurrassic park\n");
}
else if(day==7)
{
printf("pirates of carebbian\n");
}
else
printf("NOT A VALID DAy");
getch();
}