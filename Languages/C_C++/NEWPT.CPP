#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
		printf("%d",j);
		}




		for(int l=i; l<5; l++)
		{
		printf("  ");
		}
		for(int k=i; k>=1; k--)
		{
		printf("%d",k);
		}
		printf("\n");
	}


getch();
return 0;
}