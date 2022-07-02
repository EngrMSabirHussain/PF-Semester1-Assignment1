
/*
2. Write a program that inputs miles from the user and converts miles into kilometers.
One mile is equal to 1.609 kilometer.

*/



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float mile,kilo;
	cout<<"Enter Distance in miles=";
	cin>>mile;
	kilo=mile*1.609;
	cout<<"Conversion of miles into kilometer "<<endl<<endl;
	cout<<kilo<<" Km";
	getch();
	return 0;
}
