/*
6. Write a program that calculates the electricity bill. The rates of electricity per unit 
are as follows:
"	If the units consumed are <= 300, then the cost is Rs. 2 per unit.
"	If the units consumed are >300 and <=500, then the cost is Rs. 5 per unit.
"	If the units consumed exceed 500 then the cost per unit is Rs. 7
A line rent Rs. 150 is also added to the total bill and a surcharge of 5% extra if the bill 
exceeds Rs. 2000. Calculate the total bill with all the conditions given above.
*/



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float u,bill,Total;
	again:
	cout<<"Enter units consumed = ";
	cin>>u;
	if(u>0&&u<= 300)
	 {
	 	cout<<endl<<endl<<"The cost is Rs. 2 per unit"<<endl;
	 	bill=2*u;
	 }
	 else if(u>300&&u<=500)
	 {
	 	cout<<endl<<endl<<"The cost is Rs. 5 per unit"<<endl;
	 	bill=5*u;
	 }
	else if(u>500)
	 {
	 	cout<<endl<<endl<<"The cost is Rs. 7 per unit"<<endl;
	 	bill=7*u;
	 }
	 else
	 {
	 	cout<<endl<<"You enter invalid Units consumed value";
	 	cout<<endl<<"Again Enter units consumed"<<endl;
	 	goto again;
	 }
	Total=150+bill;
	if(Total>2000)
	{
		Total=Total+(5.0/100.0)*Total;
	}
	cout<<endl<<endl<<"Total Electricity Bill = Rs."<<Total;
	getch();
	return 0;

}
