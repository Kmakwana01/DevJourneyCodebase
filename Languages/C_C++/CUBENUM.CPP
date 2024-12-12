#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,p;
clrscr();

	printf("enter i");
	scanf("%d",&i);

	printf("enter p");
	scanf("%d",&p);


	while(i<=p)
	{
	n=i*i*i;
	printf("\n%d = %d",i,n);
	i++;
	}
getch();
}

