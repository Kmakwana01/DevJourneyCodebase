#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b,n;
clrscr();
	printf("exnter the n value :");
	scanf("%d",&n);

	while(a<=10)
	{
	b=n*a;
	printf("%d X %d = %d\n",n,a,b);
	a++;
	}
getch();
}
