#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

int a[2][2],j,i;
 printf("enter the Element : \n");
  for(i=0;i<2;i++)
  {
       for(j=0;j<2;j++)
       {
       scanf("%d",&a[i][j]);
       }

  }

   printf("matrix Eliments\n");
  for(i=0;i<2;i++)
  {
       for(j=0;j<2;j++)
       {
       printf("%d ",a[i][j]);
       }
	    printf("\n");
  }
  getch();
  }