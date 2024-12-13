#include <stdio.h>
#include <conio.h>
void main()
{
	int sp, cp, amt;
	clrscr();
	printf("enter the selling amount : ");
	scanf("%d", &sp);

	printf("enter the cost amount : ");
	scanf("%d", &cp);

	if (sp > cp)
	{
		amt = sp - cp;
		printf("profit is %d", amt);
	}
	else if (cp > sp)
	{
		amt = cp - sp;
		printf("loss is %d", amt);
	}
	else
	{
		printf("not valid");
	}
	getch();
}
