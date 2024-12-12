#include<stdio.h>
#include<conio.h>
void main()
{
float unit,amount;
clrscr();
printf("enter the unit :");
scanf("%f",&unit);

if(unit<=50)
{
amount=unit*0.50;
}
else if(unit>=51 && unit<=150)
{
amount=unit*0.75+25;
}
else if(unit>=151 && unit<=250)
{
amount=unit*1.20+25+75;
}
else
{
amount=unit*1.50+25+75+120;
}
printf("%f",amount);
getch();
}



