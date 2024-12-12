#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],b[20],n,i;
clrscr();
	printf("enter n::");
	scanf("%d",&n);

	for(i=0; i<=n; i++)
	{
	printf("a[%d] :: ",i);
	scanf("%d",&a[i]);
	}
	printf("\nrevrse order\n");
	for(i=n; i>=0; i--)
	{
	printf("\nb[%d] :: %d ",i,a[i]);
	}
getch();
}

