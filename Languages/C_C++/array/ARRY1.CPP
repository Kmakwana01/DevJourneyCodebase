#include<stdio.h>
#include<conio.h>
void main()
{
	int a[1],b[1],i;
clrscr();
	for(i=0; i<=4; i++)
	{
		printf("a[%d]==",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("\n");
	for(i=0; i<=4; i++)
	{
		printf("b[%d]==%d\n",i,b[i]);
	}
getch();
}
