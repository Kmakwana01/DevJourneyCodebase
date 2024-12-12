#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			//if(j%2!=0)
			{
				printf("%2d",j*2-1);//1
			}                       //  3
		}
		printf("\n");
	}
	getch();
}