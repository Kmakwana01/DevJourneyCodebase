#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)

		{
			printf("% 2d",j*2);
		}

		printf("\n");
	}
	getch();
}