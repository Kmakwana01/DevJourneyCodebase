#include<stdio.h>
#include<conio.h>
struct employe{
		char name[100];
		int age,salary;
		long int phone;
	      }emp[10];
void main()
{
		clrscr();
		for(int i=0; i<=2; i++)
		{
			printf("\nnenter name::");
			scanf("%s",&emp[i].name);

			printf("enter age::");
			scanf("%d",&emp[i].age);

			printf("enter phone::");
			scanf("%ld",&emp[i].phone);

			printf("enter the salary::");
			scanf("%d",&emp[i].salary);
		}
		for(i=0; i<=2; i++)
		{
			printf("\n\n%s",emp[i].name);
			printf("\n%d",emp[i].age);
			printf("\n%ld",emp[i].phone);
			printf("\n%d",emp[i].salary);
		}
		getch();
}


