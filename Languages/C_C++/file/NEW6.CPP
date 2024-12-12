#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int a[100],i,n,b[100],c[100],count=0;
	printf("enter position::");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		printf("a[%d]::",i);
		scanf("%d",&a[i]);
		c[count]=a[i];
		count++;
	}
	printf("\narray 2\n");
	for(i=0; i<=n; i++)
	{
		printf("b[%d]::",i);
		scanf("%d",&b[i]);
		c[count]=b[i];
		count++;
	}
	for(i=0; i<count; i++)
	{
	printf("\nc[%d]::%d",i,c[i]);
	}
	getch();
	}


