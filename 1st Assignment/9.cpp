/*
9. Write a program that allows the user to enter any character through the keyboard and determines 
whether it is a capital letter, small case letter, a digit number or a special symbol.
 
Hint: >='A' and <='Z'. >= 'a' and <= 'z' and for digit letter, >='0' and <='9'. If a letter/character 
doesn't satisfy above three conditions it means character is a symbol.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char c;
	cout<<"Enter any Charactor = ";
	cin>>c;
	if(c>='A'&&c<='Z')
	{
		cout<<endl<<endl<<c<<" is a Capital Letter";
	}
	else if(c>='a'&&c<='z')
	{
		cout<<endl<<endl<<c<<" is a Small Letter";
	}
	else if(c>='0' && c<='9')
	{
		cout<<endl<<endl<<c<<" is a Digit Number";
	}
	else
	{
		cout<<endl<<endl<<c<<" is a Special Symbol.";
	}
	getch();
	return 0;
}
