/*
8. Write a program that inputs a value and type of conversion. The program should then display the output after conversion. The program should include following conversions:
	1 cm = .394 inches
	1 liter = .264 gallons
	1 kilometer = .622 miles
	1 kilogram = 2.2 pounds
Make sure that the program accepts only valid choices for the type of conversion.
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float n1,result;
	int choice;
	cout<<"Enter any Value = ";
	cin>>n1;
	cout<<endl<<endl<<"1. Convert cm(centimetter) into inches"<<endl;
	cout<<endl<<endl<<"2. Convert liter into gallons"<<endl;
	cout<<endl<<endl<<"3. Convert kilometer into miles"<<endl;
	cout<<endl<<endl<<"4. Convert kilogram into pounds"<<endl;
	cout<<"Enter Your Choice = ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				cout<<endl<<endl<<"Conversion of cm(centimetter) into inches"<<endl;
				result=n1*0.394;
				cout<<n1<<" cm = "<<result<<" inches";
				break;
			}
			case 2:
			{
				cout<<endl<<endl<<"Conversion of liter into gallons"<<endl;
				result=n1*0.264;
				cout<<n1<<" Liter = "<<result<<" gallons";
				break;
			}
			case 3:
			{
				cout<<endl<<endl<<"Conversion of kilometer into miles"<<endl;
				result=n1*0.622;
				cout<<n1<<" Kilometer = "<<result<<" miles";
				break;
			}
			case 4:
			{
				cout<<endl<<endl<<"Conversion of kilogram into pounds"<<endl;
				result=n1*2.2;
				cout<<n1<<" kilogram = "<<result<<" pounds";
				break;
			}
			default:
				{
					cout<<endl<<endl<<"You enter Invalid choice";
				}
	}
	getch();
	return 0;
}
