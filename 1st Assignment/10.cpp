/*
10. Write a program that gets the number and a letter as input. If the letter entered by user is
 'f', the program should treat the number entered as temperature in degrees Fahrenheit and convert
  it convert it to the temperature in degree Celsius and print a suitable message. If the letter is
   'c', the program should consider the number as Celsius temperature and convert it to Fahrenheit 
   temperature and print a suitable message. The program should display error message and then exit 
   if the user enters any other letter.
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float n1,temp;
	char choice;
	cout<<"Enter Temperature Value = ";
	cin>>n1;
	cout<<endl<<"F(f)  For Fahrenheit"<<endl;
	cout<<endl<<"C(c) For Celsius "<<endl;
	cout<<endl<<"Enter Temperature Type = ";
	cin>>choice;
	switch(choice)
	{
		case 'f':
		case 'F':
			{
				temp=(5.0/9.0)*(n1-32);
	            cout<<endl<<"Fahrenheit temperature in Celsius degree"<<endl;
	            cout<<"Celsius degree = "<<temp;
	            break;
			}
		case 'c':
		case 'C':
			{
				temp=((9.0/5.0)*n1)+32;
	            cout<<endl<<"Celsius degree in Fahrenheit temperature"<<endl;
	            cout<<"Fahrenheit temperature = "<<temp;
	            break;
			}
		default:
			{
				cout<<endl<<" You Enter Wrong Choice ";
			}
	}
	getch();
	return 0;
}
