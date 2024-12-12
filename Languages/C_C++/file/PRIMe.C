#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,count=0;
	clrscr();
	printf("enter number");
	scanf("%d",&n);

	for(;i<=n;)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;

	}
	if(count==2)
	{
		printf("number is prime");

	}
	else
	{
		printf("number is not prime");
	}
	getch();
}