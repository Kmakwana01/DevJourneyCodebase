#include<stdio.h>
#include<conio.h>
void printnamste();
void printbonjour();

int main()
{
clrscr();
printf("enter the f for french & i for indian::::");
char chh;
scanf("%c",&chh);
if(chh=='i')
{
printnamste();
}
else
{
printbonjour();
}
getch();
return 0;
}
void printnamste()
{
	printf("namste indian");
}
void printbonjour()
{
	printf("bonjour");
}

