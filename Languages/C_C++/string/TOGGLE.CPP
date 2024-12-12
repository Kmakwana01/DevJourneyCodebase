#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
		char ch[90];
		gets(ch);
		for(int i=0; ch[i]!=NULL; i++)
		{
			if(ch[i]>='a' && ch[i]<='z')
			{
			ch[i]=ch[i]-32;
			}
			else if(ch[i]>='A' && ch[i]<='Z')
			{
			ch[i]=ch[i]+32;
			}
		}
		printf("toggle string is %s",ch);
getch();
}