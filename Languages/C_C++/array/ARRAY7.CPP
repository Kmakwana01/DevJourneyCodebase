#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,sum=0;
	float average;
clrscr();
	printf("enter n :: ");
	scanf("%d",&n);

	for(int i=1; i<=n; ++i)
	{
		printf("a[%d] :: ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	average=sum/n;
	printf("average is %f",average);
getch();
}

