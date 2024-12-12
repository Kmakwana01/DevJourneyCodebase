#include<stdio.h>
#include<conio.h>
void main()
{
		int a[20],b[20],i;

clrscr();
	for(i=0; i<=4; i++)
	{
		printf("a[%d]==",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0; i<=4; i++)
	{
	printf("\nb[%d]==%d",i,b[i]);
	}
getch();
}