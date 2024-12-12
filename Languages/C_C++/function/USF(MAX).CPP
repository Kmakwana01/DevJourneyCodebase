#include<stdio.h>
#include<conio.h>
void fibonacci();
void main()
{
	clrscr();
	fibonacci();
	getch();
}
void fibonacci()
{
       int a[100],max;

       for(int i=0; i<=5; i++)
       {
		printf("a[%d] :: ",i);
		scanf("%d",&a[i]);
       }
       max=a[0];
       for(i=0; i<=5; i++)
       {
		if(max<a[i])
		{
		max=a[i];
		}
       }
       printf("max is %d",max);
}
