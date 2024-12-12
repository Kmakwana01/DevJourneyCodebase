#include<iostream.h>
#include<conio.h>
void main()
{
		clrscr();
		int devidend,deviser,quotient,remainder;
		float ok;
		cout<<"enter devidend value :: ";
		cin>>devidend;

		cout<<"denter deviser value :: ";
		cin>>deviser;

		quotient=devidend/deviser;     //ansh
		ok=devidend%deviser;    //shesh
		remainder=ok;

		cout<<"\nquotient is "<<quotient;
		cout<<"\nremainder is "<<remainder;
getch();
}

