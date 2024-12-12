#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100][100],i,j,swap[100];
	cout<<"enter 5 string";
	for(i=0; i<=4; i++)
	{
		cin>>a[i];
	}
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=4; j++)
		{
			if(strcmp(a[i],a[j])<0)
			{
				strcpy(swap,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],swap);
			}
		}
	}
	cout<<"\n\nafter shorting";
	for(i=0;i<=4; i++)
	{
		cout<<endl<<a[i];
	}
	getch();
	}


