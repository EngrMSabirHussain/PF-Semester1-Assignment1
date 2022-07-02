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
	float u,b=0,total;
	again:
	cout<<"Enter units consumed = ";
	cin>>u;
	if(u<0)
	{
		cout<<"you enter wrong unit consumed"<<endl;
		cout<<endl<<"Again Enter units consumed"<<endl;
	 	goto again;
	}
	if(u>=50)
	{	
	 b=b+50*0.50;
    }
	u=u-50;
	if(u>=100)
	{
		b=b+100*0.75;
	}
	u=u-100;
	if(u>=100)
	{
		b=b+100*1.20;
	}	
	u=u-100;
	if(u>=1)
	{
	   b=b+u*1.50;	
	}
	total=b+(20.0/100.0)*b;
	cout<<endl<<"Total Electricity Bill = Rs."<<total;
	getch();
	return 0;
}
