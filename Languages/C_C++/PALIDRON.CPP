#include<stdio.h>
#include<conio.h>
void main()
{

int n,o,rem,sum=0;
clrscr();
			printf("enter the n:");
			scanf("%d",&n);
			o=n;
			while(n!=0)
			{
				rem=n%10;
				sum=sum*10+rem;
				n=n/10;
			}
			printf("%d",sum);

			if(sum==o)
			{
				printf("palidrin number");
			}
			else
			{
				printf("not a palidron number");
			}
			getch();
			}

