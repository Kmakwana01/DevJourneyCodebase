#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,max,total,min;  //a=eng    b=science c=chem
			     //d=maths  e=psy
double avrege;
clrscr();
printf("enter 5 subjects marks:\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

max=a>b?a>c?a>d?a>e?a:e:d>e?d:e:c>d?c>e?c:e:d>e?d:e:
    b>c?b>d?b>e?b:e:d>e?d:e:c>d?c>e?c:e:d>e?d:e;
printf("%d is max\n",max);

min=a<b?a<c?a<d?a<e?a:e:d<e?d:e:c<d?c<e?c:e:d<e?d:e:
    b<c?b<d?b<e?b:e:d<e?d:e:c<d?c<e?c:e:d<e?d:e;
printf("%d is min\n",min);

total=a+b+c+d+e;
printf("%d\n",total);

avrege=total/5.0;
printf("avrege is %lf\n",avrege) ;

if(a,b,c,d,e>33)
{
if(avrege<33)
	    {
	    printf("Fail");
	    }
else if(avrege<60)
	    {
	    printf("GRADE C");
	    }
else if(avrege<80)
	    {
	    printf("GRAdE B");
	    }
else if(avrege<90)
	    {
	    printf("GRADE A");
	    }
else if(avrege<=100)
	    {
	    printf("GRADE A++");
	    }
else
	    {
	    printf("NOT VAlID MARKS");
	    }
}
else
{
printf("fail");
}

getch();
}