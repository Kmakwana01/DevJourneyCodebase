#include<stdio.h>
#include<conio.h>
void main()
{
		    int n1,n2;
clrscr();
	printf("enter n1\t");
	scanf("%d",&n1);

	printf("enter n2\t");
	scanf("%d",&n2);

	if(n1<n2)
	{
		printf("\nodd numbers\n\n");
		for(int i=n1;i<=n2;i++)
		{
			if(i%2==1)
			{
			printf("%d\t",i);
			}
		}
	}
	else
	{       printf("\neven numbers\n\n");
		for(int i=n1;i>=n2;i--)
		{
			if(i%2==0)
			{
			printf("%d\t",i);
			}
		}
	}
getch();
}
