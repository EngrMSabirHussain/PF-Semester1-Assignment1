
/*
1. Write a program that inputs temperature from the user in Fahrenheit and converts
it into Celsius degree using formula 5/9(F - 32).
*/



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float f,c;
	cout<<"Enter temperature in Fahrenheit=";
	cin>>f;
	c=(5.0/9.0)*(f-32);
	cout<<"Fahrenheit temperature in Celsius degree"<<endl;
	cout<<"Celsius degree="<<c;
	getch();
	return 0;
}
