#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],b[50],i;
clrscr();
	for(i=5; i>0; i--)
	{
		printf("a[%d]==",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=5; i>0; i--)
	{
		printf("\nb[%d]==%d",i,b[i]);
	}
getch();
}