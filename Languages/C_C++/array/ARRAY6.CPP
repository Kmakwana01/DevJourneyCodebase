#include<stdio.h>
#include<conio.h>
void main()
{
	int round[20],i,round2[20];
clrscr();
	for(i=0; i<=5; i++)
	{
		 printf("round[%d]==",i);
		 scanf("%d",&round[i]);
		 round2[i]=round[i];
	}

	for(i=0; i<=5; i++)
	{
		printf("\nround2[%d]==%d",i,round2[i]);
	}

getch();
}