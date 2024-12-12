#include<stdio.h>
#include<conio.h>
void main()
{
	int a[8][90];//int n;
clrscr();
       //	printf("enter n");
       //	scanf("%d\n",&n);

	printf("enter array elements\n");
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("array elements\n");

	for(i=0; i<=2; i++)
	{
		for(int j=0; j<=3; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

getch();\
}