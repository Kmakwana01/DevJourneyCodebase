#include<stdio.h>
#include<conio.h>
void main()
{
	float cel,feh;
clrscr();


	printf("enter the celcius value:");
	scanf("%f",&cel);

	feh=cel*9/5+32;
	printf("feh==%lf",feh);

getch();
}
