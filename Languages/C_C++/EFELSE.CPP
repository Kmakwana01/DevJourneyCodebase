#include<stdio.h>
#include<conio.h>
void main()
{
int h,f,max;
clrscr();
	printf("enter the h & g =\n");
	scanf("%d%d",&h,&f);

	if(h>f)
	{
	max=h;
	}
	else
	{
	max=f;
	}
	printf("\n%d is max",max);
	getch();
	}
