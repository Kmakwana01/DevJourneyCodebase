#include <stdio.h>
#include <conio.h>
void main()
{
	int unit;
	double amt, charge, total_amt;
	clrscr();
	printf("enter the units : ");
	scanf("%d", &unit);

	if (unit <= 50)
	{
		amt = 50 * 0.50;
	}
	else if (unit <= 150)
	{
		amt = 25 + ((unit - 50) * 0.75);
	}
	else if (unit <= 250)
	{
		amt = 100 + ((unit - 150) * 1.20);
	}
	else if (unit > 250)
	{
		amt = 220 + ((unit - 250) * 1.50);
	}
	charge = amt * 0.20;
	total_amt = amt + charge;

	printf("electric bill is $%.2lf ", total_amt);
	getch();
}
