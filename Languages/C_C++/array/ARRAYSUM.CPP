#include<stdio.h>
#include<conio.h>
void main()
{            int a[20],n,sum=0;
clrscr();
	printf("enter n\t");
	scanf("%d",&n);

	for(int i=1; i<=n; i++)
	{
	printf("a[%d] ::",i,a[i]);
	scanf("%d",&a[i]);
	sum+=a[i];
	}
	printf("0 to n sum == %d",sum);
getch();
}
