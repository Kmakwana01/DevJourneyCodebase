#include<stdio.h>
#include<conio.h>
#include<math.h>
float squarearea(float side);
float circularea(float rad);
float rectanglearea(float a,float b);

int main()
{
clrscr();
//float a=5.00;
float rad;
printf("enter the side : ");
scanf("%f",&rad);
printf("area is : %f",circularea(rad));

getch();
return 0;
}
float squarearea(float side)
{
return side*side;
}
float circularea(float rad)
{
return 3.14*rad*rad;
}
float rectanglearea(float a,float b)
{
return a*b;
}
