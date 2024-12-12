#include<stdio.h>
#include<conio.h>
void main()
{
	int t[78],n,i,o;
clrscr();
	printf("enter elements :");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("t[%d] :: ",i);
		scanf("%d",&t[i]);
	}

	printf("\nenter delete element");
	scanf("%d",&o);

	for(i=o; i<n; i++)
	{
		t[i]=t[i+1];
	}

	printf("\nafter delet element");

	for(i=0; i<n-1; i++)
	{
		printf("\nt[%d] :: %d",i,t[i]);
	}
getch();
}