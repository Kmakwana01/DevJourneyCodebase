#include<stdio.h>
#include<conio.h>
float square(float side);
float circul(float rad);
float rectangle(float a, float b);
void main()
{
		clrscr();
		printf("%f",circul(5.5));
		getch();
}
float square(float side)
{
		side=side*side;
		return side;
}
float circul(float rad)
{
		float an=3.14*rad*rad;
		return an;
}
float rectangle(float a,float b)
{
		float an=a*b;
		return an;
}
