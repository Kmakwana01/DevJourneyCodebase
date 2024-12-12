#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,sum;
clrscr();
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
			printf("a[%d][%d] :: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	sum=a[0][0];

	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{

			sum+=a[i][j];
		}
		printf("\n");
	}
	printf("sum is %d",sum);
getch();
}

