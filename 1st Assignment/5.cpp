/*
5. Write a program to find out the area of triangle when three sides a, b and c of the 
triangle are given. Use appropriate statements to input the values a, b and c from the 
keyboard. Formula for the area of triangle is 
        S=(a+b+c)/2
Area of Triangle=?s(s-a)(s-b)(s-c)

*/


#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,s,result;
	cout<<"Enter the value of a = ";
	cin>>a;
	cout<<"Enter the value of b = ";
	cin>>b;
	cout<<"Enter the value of c = ";
	cin>>c;
	s=(a+b+c)/2;
	result=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<endl<<endl<<"The area of triangle = "<<result;
	getch();
	return 0;
}
	
