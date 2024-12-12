#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100][100],swap[100];
	int n,i,j;
		cout<<"enter n value::";
		cin>>n;
		for(i=0; i<=n; i++)
		{
			cout<<"a["<<i<<"] ::";
			cin>>a[i];
		}
		for(i=0; i<=n; i++)
		{
			for(j=0; j<=n; j++)
			{
				if(strcmp(a[i],a[j])<0)
				{
					strcpy(swap,a[i]);
					strcpy(a[i],a[j]);
					strcpy(a[j],swap);
				}
			}
		}
		cout<<endl;
		cout<<"\nafter shorting::\n\n";
		for(i=0; i<=n; i++)
		{
			cout<<a[i]<<endl;
		}
		getch();
		}