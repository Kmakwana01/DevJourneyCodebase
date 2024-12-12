#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int math,eng,psy,guj,total;
	float per;

	cout<<"enter 5 subject marks\n";

	cout<<"math :";
	cin>>math;

	cout<<"eng :";
	cin>>eng;

	cout<<"psy :";
	cin>>psy;

	cout<<"guj :";
	cin>>guj;

	total=math+eng+psy+guj;
	cout<<"total is "<<total<<endl;

	per=total/4.0;
	cout<<"persontage is "<<per<<endl;

	if(math>eng && math>psy && math>guj)
	{
		cout<<"math is max";
	}
	else if(eng>psy && eng>guj)
	{
		cout<<"eng is max";
	}
	else if(psy>guj)
	{
		cout<<"psy is max";
	}
	else
	{
		cout<<"guj is max";
	}
	cout<<endl;
	if(per<50)
	{
		cout<<"fail";
	}
	else if(per<80)
	{
		cout<<"grade b";
	}
	else if(per<100)
	{
		cout<<"grade a";
	}
getch();
}


