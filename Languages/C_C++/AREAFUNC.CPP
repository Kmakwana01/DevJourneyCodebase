#include<stdio.h>
#include<conio.h>
float squareArea(float side);
float circulArea(float rad);
float rectangleArea(float a,float b);

int main()
{
clrscr();
float rad=5;
printf("circul area is %f",circulArea(rad));
getch();
return 0;
}
float squareArea(float side)
{
return side*side;
}
float circulArea(float rad)
{
return 3.14*rad*rad;
}
float rectangleArea(float a,float b)
{
return a*b;
}
