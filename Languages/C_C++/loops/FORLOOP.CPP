#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
for(int p=1; p<=10; p++)
{
   for(int q=10;q>=p; q--)
   {
   printf("* ",q);
   }
   printf("\n",p);
}
getch();
}

