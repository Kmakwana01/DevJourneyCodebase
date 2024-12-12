#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("enter the day:");
scanf("%d",&day);

if(day<=2)
{
printf("sunday\n");
   if(day==1)
   {
   printf("sunday,monday");
   }
   else
   {
   printf("this information is rong");
   }
}
else if(day<=5)
{
printf("thursday");
}
else
{
printf("NOT A VALID DAY");
 }
 getch();
 }


