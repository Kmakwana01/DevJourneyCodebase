#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,charge,total_amt,unit,n;
clrscr();
	printf("enter unit");
	scanf("%d",&unit);

	printf("enter n");
	scanf("%d",&n);

	switch(n)
	{
	case 1 : if(unit<=50)
			 {
			 amt=unit*50;
			 }
			 break;
	case 2 : if(unit<=150)
			{
			 amt=25+(unit-50)*0.75;
			 }
			 break;
	case 3 : if(unit<=250)
			 {
			 amt=120+(unit-150)*1.20;
			 }
			 break;
	case 4 : if(unit>250)
			 {
			 amt=220+(unit-250)*1.50;
			 }
			 break;
	default: printf("not valid");
	}
	charge=amt+(amt*0.20);
	total_amt=amt+charge;
	printf("bill amount is %f",total_amt);

getch();
}