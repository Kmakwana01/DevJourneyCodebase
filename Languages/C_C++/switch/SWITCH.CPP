#include <stdio.h>
#include <conio.h>
void main()
{
    int day;
    clrscr();
    printf("enter the Number :");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("monday\n");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("NOt A VAlID DAY");
    }

    getch();
}
