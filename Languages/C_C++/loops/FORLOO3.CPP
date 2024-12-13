#include <stdio.h>
#include <conio.h>
void main()
{
   clrscr();
   for (int p = 1; p <= 10; p++)
   {
      for (int q = 10; q >= p; q--)
      {
         printf("* ", q);
      }
      printf("\n", p);
   }
   for (int i = 1; i <= 10; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         printf(" *", j);
      }
      printf("\n");
   }
   getch();
}