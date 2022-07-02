/*
12. Write a C++ program to input electricity unit charges and calculate total electricity bill
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
 For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill

*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float u,b=0.0,total=0.0;
	again:
	cout<<"Enter units consumed = ";
	cin>>u;
	if(u<0)
	{
		cout<<"you enter wrong unit consumed"<<endl;
		cout<<endl<<"Again Enter units consumed"<<endl;
	 	goto again;
	}
	cout<<endl;
	cout<<"\t Different Unit Rates according to Unit "<<endl<<endl;
	if(u>250)
	{
	cout<<(u-250)<<" Unit Rate = "<<1.50<<endl;	
	 b=b+(u-250)*1.50;
	 u=u-(u-250);
    }
	if(u>150&&u<=250 )
	{
		cout<<(u-150)<<" Unit Rate = "<<1.20<<endl;
		b=b+(u-150)*1.20;
		u=u-(u-150);
	}
	if(u>50&&u<=150)
	{
		cout<<(u-50)<<" Unit Rate = "<<0.75<<endl;
		b=b+(u-50)*0.75;
		u=u-(u-50);
	}	
	if(u<=50)
	{
	    cout<<u<<" Unit Rate = "<<0.50<<endl;
	   b=b+(u*0.50);	
	}
	total=b+(20.0/100.0)*b;
	cout<<endl<<endl;
	cout<<"Electricity Bill = "<<b<<endl;
	cout<<"Additional Surcharge 20% = "<<(20.0/100.0)*b<<endl;
	cout<<"Total = Bill + Tex"<<endl;
	cout<<"Total Electricity Bill = Rs."<<total;
	getch();
	return 0;
}
