#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

/*  Arithmatic operator "*,/,%,+,-"  */
int a= 1, b=2, c=3;
//valid      //invalid
//a = b-b;    //b+c=a;

//relatinal operater //  "==,>,>=,<,<=,!="
printf("%d\n",4<=4);
printf("%d\n",5>=4);
printf("%d\n",!(5>=4));

//logical operator//     "&,||,!"
printf("%d\n",(c>b)&(c>b));  //and(ampercent)
printf("%d\n",(a<c)||(a>c)); //or
printf("%d\n",(a<c)!=(a>c)); //not equeal to

//assignment operator// "=,+=,-+,*=,/=,%="
printf("%d\n",c+=c);
printf("%d\n",c*=c);

getch();
}
