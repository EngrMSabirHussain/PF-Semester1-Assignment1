/*
3. Write a program that inputs 4 numbers and calculates the sum, average an Product of all the numbers.
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float n1,n2,n3,n4,sum,avg,pro;
	cout<<"Enter 1st value= ";
	cin>>n1;
	cout<<"Enter 2nd value= ";
	cin>>n2;
	cout<<"Enter 3rd value= ";
	cin>>n3;
	cout<<"Enter 4th value= ";
	cin>>n4;
	
	cout<<endl<<"sum"<<endl;
	sum=n1+n2+n3+n4;
	cout<<n1<<"+"<<n2<<"+"<<n3<<"+"<<n4<<" = "<<sum<<endl<<endl;
	
	cout<<endl<<"Product"<<endl;
	pro=n1*n2*n3*n4;
	cout<<n1<<"*"<<n2<<"*"<<n3<<"*"<<n4<<" = "<<pro<<endl<<endl;
	
	cout<<endl<<"Average"<<endl;	
	avg=sum/4;
	cout<<sum<<"/"<<"4"<<" = "<<avg<<endl<<endl;
	getch();
	return 0;
}
