/*
7. Write a program that inputs three numbers and displays whether all the numbers are equal or not
 by using nested if condition.
 */



#include<iostream>
using namespace std;
int main()
{
	float n1,n2,n3;
	cout<<"Enter 1st Number = ";
	cin>>n1;
	cout<<"Enter 2nd Number = ";
	cin>>n2;
	cout<<"Enter 3rd Number = ";
	cin>>n3;
	if(n1==n2)
	{
		if(n2==n3)
		{
			cout<<endl<<"congratulation";
			cout<<endl<<endl<<"All values are Equal"<<endl;
			cout<<n1<<" = "<<n2<<" = "<<n3;
		}
		else
		{
			cout<<endl<<"Sorry";
			cout<<endl<<endl<<"values are not Equal";
		}
	}
	else
		{
			cout<<endl<<"Sorry";
			cout<<endl<<endl<<"values are not Equal";
		}
		return 0;
	}
