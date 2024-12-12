#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=0,t;
clrscr();

		printf("enter the n value : ");
		scanf("%d",&n);

		t=n;

		while(n!=0)
		{
		r=n%10;
		sum=sum*(t*t*t);
		n=n/10;
		}

		printf("%d",sum);
		if(t==sum)
		{
			printf("armstrong");
		}
		else
		{
			printf("not armstrong");
		}
		getch();
		}

