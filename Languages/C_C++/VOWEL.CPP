#include<stdio.h>
#include<conio.h>
void main()
{
char chh;
clrscr();
		printf("enter the char: ");
		scanf("%c",&chh);

		if(chh=='a'||chh=='e'||chh=='i'||chh=='o'||chh=='u'||
		   chh=='A'||chh=='E'||chh=='I'||chh=='O'||chh=='U')
		{
			printf("the vowel charcter");
		}
		else if(chh>='a' && chh<='z' || chh>='A' && chh<='Z')
		{
			printf("thr consonent char");
		}
		else
		{
			printf("not a alphabet");
		}
		getch();
		}