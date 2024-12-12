#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,sum=0,sum2=0;
clrscr();

	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
		printf("a[%d][%d] ::",i,j);
		scanf("%d",&a[i][j]);
		}
	}

	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
			printf("\t%d",a[i][j]);
			sum+=a[i][j];
		}
		printf("    %d",sum);
		printf("\n");
		sum=0;

	}
	printf("\n");
	for(i=0; i<=2; i++)
	{

		for(j=0; j<=2; j++)
		{
			sum2+=a[j][i];
		}
		printf("\t%d",sum2);
		sum2=0;
	}
getch();
}