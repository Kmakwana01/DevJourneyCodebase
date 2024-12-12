#include<stdio.h>
#include<conio.h>
int palin();
int main()
{
clrscr();
palin();
printf("%d",palin());
getch();
return 0;
}
int palin()
{
		int n,sum=0,rem,o;
		printf("enter the value");
		scanf("%d",&n);
		o=n;
		while(n>0)
		{
			rem=n%10;
			sum=sum*10+rem;
			n=n/10;
		}
		if(o==sum)
		{
		printf("\npalindrome number");
		}
		else
		{
		printf("\nnot palindrome");
		}
		return sum;
}
