#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("enter the day : ");
scanf("%d",&day);
switch(day)
{
case 1 : printf("monday");
break  ;
case 2 : printf("tuesday");
break  ;
case 3 : printf("wednesday");
break  ;
case 4 : printf("thursday");
break  ;
case 5 : printf("friday");
break  ;
case 6 : printf("saturday");
break  ;
case 7 : printf("sunday");
break  ;
default: printf("NOT A VALID DAY");
}
getch();
}