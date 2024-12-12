#include<stdio.h>
#include<conio.h>
void main()
{
int marks;
clrscr();
printf("enter the marks : ");
scanf("%d",&marks);
//printf("enter the 5 subject Marks :");
//scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	if(80>=100)
		  {
		  printf("A+ grade");
		  }
    else if(marks<=90)
		  {
		  printf("b grade");
		  }
    else if(marks<80)
		  {
		  printf("c grade");
		  }
  else if(0<35)
		  {
		  printf("fail")  ;
		  }
	      else{
		   printf("not valid this day");
		   }
		   getch();
		   }




