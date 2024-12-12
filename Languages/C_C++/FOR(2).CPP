#include<stdio.h>
#include<conio.h>
void main()
{
int i=2,count=0,n;
clrscr();
	printf("enter the nh value :");
	scanf("%d",&n);

	while(n>i)
	{
		if(n%i==0)
		{
		count++;
		break;
		}
		i++;
	}
	if(count==1)
	{
	printf("not prime");
	}
	else
	{
	printf("prime number");
	}
getch();
}


