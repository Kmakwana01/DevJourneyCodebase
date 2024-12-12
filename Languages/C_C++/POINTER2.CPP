#include<stdio.h>
#include<conio.h>
void swap(int x,int y);
void _swap(int *x,int *y);
void main()
{
		clrscr();
		int x=5,y=4;
		_swap(&x,&y);
		printf("\nafter swap x=%d & y=%d\n",x,y);
		getch();

}
void swap(int x,int y)
{
		int t=x;
		    x=y;
		    y=t;
		printf("\nafter swap x=%d & y=%d",x,y);
}
void _swap(int *x,int *y)
{
		int t=*x;
		    *x=*y;
		    *y=t;
		    printf("\nafter swap x=%d & y=%d",*x,*y);
}

