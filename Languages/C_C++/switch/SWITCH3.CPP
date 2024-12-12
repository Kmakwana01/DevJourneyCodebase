#include<stdio.h>
#include<conio.h>
void main()
{
	int n,n1,n2,n3;
clrscr();
	printf("enter your choice\t");
	scanf("%d",&n);

	printf("\nenter n1\t");
	scanf("%d",&n1);

	printf("\nenter n2\t");
	scanf("%d",&n2);

	switch(n)
	{

	case 1 : n3=n1+n2;
		 printf("\nn1 & n2 addition is %d",n3);
	break  ;

	case 2 : n3=n1-n2;
		 printf("\nn1 & n2 mainus is %d",n3);
	break  ;

	case 3 : n3=n1*n2;
		 printf("\nn1 & n2 multification is %d",n3);
	break  ;

	case 4 : n3=n1%n2;
		 printf("\nn1 &n2 modulo is %d",n3);
	default: printf("enter valid choice");
	}
getch();
}