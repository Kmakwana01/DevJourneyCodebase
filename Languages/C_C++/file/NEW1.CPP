#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
	int a,b,c,d;
	printf("enter a");
	scanf("%d",&a);

	printf("enter b");
	scanf("%d",&b);

	printf("enter c");
	scanf("%d",&c);

	printf("enter d");
	scanf("%d",&d);

	int result=a>b?a>c?a>d?a:d:a>d?a:d:b>c?b>d?b:d:c>d?c:d;
      //	int result=a>b?a>c?a>d?a:b>c?b>d?b:c>d?c:d;
     //	int result=a>b?a>c?a>d?a:b:b>c?b>d?b:d:c>d?c:d;
	printf("%d",result);

	getch();
	}