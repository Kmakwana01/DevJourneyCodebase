#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,on,rem,result=0;
	printf("enter n value::");
	scanf("%d",&n);
	on=n;

	while(on!=0){
	     rem=on%10;
	     result+=rem*rem*rem;
	     on/=10;
	}
	if(result==n)
	{
	printf("armstron number");
	}
	else
	{
	printf("this is not armstrong::");
	}


	getch();
	}