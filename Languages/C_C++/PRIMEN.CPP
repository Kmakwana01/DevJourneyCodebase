#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,count=0,n;
clrscr();
	printf("enter n:");
	scanf("%d",&n);

	do
	{
	    if(n%i==0)
		{
		count++;
		}
		i++;
	}
	while(i<=n);
	if(count==2)
	{
	printf("prime number");
	}
	else
	{
	printf("not prime number");
	}
getch();
}