#include <stdio.h>
#include <conio.h>
int sum(int a, int b);
int main()
{
    int a = 10;
    int b = 5;
    printf("enter a&b:");
    scanf("%d%d", &a, &b);
    int c = a + b;
    printf("%d", c);
    getch();
    return 0;
}
int sum(int a, int b)
{
    int result = a + b;
    return result;
}
