#include<stdio.h>
#include<conio.h>
void main()
{
		int i,n,sum=0;
clrscr();
		printf("enter the n value: ");
		scanf("%d",&n);

		for(i=1; i<=n; i++)
		{
		printf("\n%d",i);
		sum=sum+i;
		}
		printf("\nsum is :: %d",sum);

getch();
}