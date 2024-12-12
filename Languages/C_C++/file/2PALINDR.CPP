#include<stdio.h>
#include<conio.h>
void main()
{
	int s,rev,sum=0,n;
clrscr();
	printf("enter n");
	scanf("%d",&n);
	s=n;
	while(n!=0)
	{
	 rev=n%10;
	 sum=sum*10+rev;
	 n=n/10;
	 }
	 printf("%d",sum);

	 if(s==sum)
	 {
	 printf("palindron number");
	 }
	 else
	 {
	 printf("not palindron");
	 }

getch();
}
