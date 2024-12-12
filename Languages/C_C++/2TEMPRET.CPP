#include<stdio.h>
#include<conio.h>
void main()
{
float  a,b,celcius,fehranhit;
int x;
clrscr();
	printf("celcius to fehranhit : case 1\n");
	printf("fehranhit to celcius : case 2\n");

	printf("enter your choice\n");
	scanf("%d",&x);


switch(x)
{
case 1 : printf("enter the fehranhit tempreture((cel. to fehr.))\n");
	 scanf("%f",&b);

	 fehranhit=((9*b)/5)+32;
	 printf("%f",fehranhit);
break  ;

case 2 : printf("enter the celcius temreture(((fehr. to cel.)))\n");
	 scanf("%f",&a);


	 celcius=5*(a-32)/9;
	 printf("%f",celcius);
break   ;

default : printf("\n\n not a valid choice ");

}
getch();
}