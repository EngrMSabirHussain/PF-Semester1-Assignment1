/*
11. Write a C++ program to input basic salary of an employee and calculate its Gross salary
according to following:
 Basic Salary <=10000: HRA = 20%, DA = 80%
 Basic Salary <= 20000: HRA = 25%, DA = 90%
Basic Salary > 20000: HRA = 30%, DA = 95%
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float BS, GS;
	cout<<"Enter Your Basic Salary = ";
	cin>>BS;
	cout<<endl<<endl;
	if(BS<=10000)
	{
		GS=BS+ ((20.0/100.0)*BS) + ((80.0/100.0)*BS);
		cout<<"House Rent Allowance (HRA) = Rs. "<<(20.0/100.0)*BS<<endl;
		cout<<"Dearness Allowance (DA) = Rs. "<<(80.0/100.0)*BS<<endl;
		cout<<"So"<<endl;
		cout<<"Gross Salary = Basic salary + HRA + DA"<<endl;
		cout<<endl<<endl;
		cout<<"*************************************"<<endl;
		cout<<"Gross Salary = "<<GS<<endl;
		cout<<"*************************************"<<endl;
	}
	else if(BS<=20000)
	{
		GS=BS+ ((25.0/100.0)*BS) + ((90.0/100.0)*BS);
		cout<<"House Rent Allowance (HRA) = Rs. "<<(25.0/100.0)*BS<<endl;
		cout<<"Dearness Allowance (DA) = Rs. "<<(90.0/100.0)*BS<<endl;
		cout<<"So"<<endl;
		cout<<"Gross Salary = Basic salary + HRA + DA"<<endl;
		cout<<endl<<endl<<"*************************************"<<endl;
		cout<<"Gross Salary = "<<GS<<endl;
		cout<<"*************************************"<<endl;
	}
	else
	{
		GS=BS+ ((30.0/100.0)*BS) + ((95.0/100.0)*BS);
		cout<<"House Rent Allowance (HRA) = Rs. "<<(30.0/100.0)*BS<<endl;
		cout<<"Dearness Allowance (DA) = Rs. "<<(95.0/100.0)*BS<<endl;
		cout<<"So"<<endl;
		cout<<"Gross Salary = Basic salary + HRA + DA"<<endl;
		cout<<endl<<endl<<"*************************************"<<endl;
		cout<<"Gross Salary = "<<GS<<endl;
		cout<<"*************************************"<<endl;
	}
	getch();
	return 0;
}
