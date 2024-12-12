#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum=0;

clrscr();

	printf("enter the a :");
	scanf("%d",&n);

	while(n!=0)
	{
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
	}
	printf("%d",sum);

	getch();
	}




