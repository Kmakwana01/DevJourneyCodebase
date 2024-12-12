#include<stdio.h>
#include<conio.h>
void main()
{
	int a[45],n,min;
clrscr();
	printf("enter n value ");
	scanf("%d",&n);

	for(int i=0; i<=n; i++)
	{
	printf("a[%d]::",i);
	scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0; i<=n; i++)
	{
		if(min>=a[i])
		{
		min=a[i];
		}
	}
	printf("minimum element %d",min);

getch();
}