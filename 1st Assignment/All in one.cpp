#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	cout<<"\t All in One Program"<<endl;
	cout<<endl<<endl<<"\t Select Question Number"<<endl<<endl;
	
	cout<<"1. Write a program that inputs temperature from the user in Fahrenheit and"<<endl;
	cout<<"   converts it into Celsius degree using formula 5/9(F - 32)."<<endl;
	
    cout<<endl<<"2. Write a program that inputs miles from the user and converts miles into"<<endl;
	cout<<"   kilometers. One mile is equal to 1.609 kilometer."<<endl;
	
    cout<<endl<<"3. Write a program that inputs 4 numbers and calculates the sum, average an "<<endl;
	cout<<"   Product of all the numbers."<<endl;
	
    cout<<endl<<"4. Write a program that displays the following output:";
	cout<<endl<<"   Number\tSquare\tCube"<<endl<<"   1\t\t1\t1"<<endl<<"   2\t\t4\t8"<<endl<<"   3\t\t9\t27"<<endl;
	cout<<"   4\t\t16\t64"<<endl<<"   5\t\t25\t125"<<endl;
	
	cout<<endl<<"5. Write a program to find out the area of triangle when three sides a, b  "<<endl;
	cout<<"   and c of the triangle are given."<<endl;
	
	cout<<endl<<"6. Write a program that calculates the electricity bill. "<<endl;
	
	cout<<endl<<"7. Write a program that inputs three numbers and displays whether all the "<<endl;
	cout<<"   numbers are equal or not by using nested if condition."<<endl;
	
	cout<<endl<<"8. Write a program that inputs a value and type of conversion. The program "<<endl;
	cout<<"   should then display the output after conversion."<<endl;
	
	cout<<endl<<"9. Write a program that allows the user to enter any character through the "<<endl;
	cout<<"   keyboard and determines whether it is a capital letter, small case letter,"<<endl;
	cout<<"   a digit number or a special symbol."<<endl;
	
	cout<<endl<<"8. Write a program that inputs a value and type of conversion. The program "<<endl;
	cout<<"   should then display the output after conversion."<<endl; 
	
	cout<<endl<<"10. Write a program that gets the number form user and convert into"<<endl;
	cout<<"    Fahrenheit temperature &  Celsius temperature according to user choice"<<endl;
	
	cout<<endl<<"11. Write a C++ program to input basic salary of an employee and  "<<endl;
	cout<<"   calculate its Gross salary."<<endl;
	
	cout<<endl<<"12. Write a C++ program to input electricity unit charges and  "<<endl;
	cout<<"   calculate total electricity bill. An additional surcharge of 20% " <<endl;
	cout<<"   is added to the bill"<<endl; 
	
	int choice;
	
	start:
	cout<<endl<<endl<<"Enter your Choice = ";
	cin>>choice;
	cout<<endl<<"**************************************************************"<<endl;
	
		switch(choice)
	{
		case 1:
			{
				float f,c;
				cout<<"Enter temperature in Fahrenheit=";
				cin>>f;
				c=(5.0/9.0)*(f-32);
				cout<<"Fahrenheit temperature in Celsius degree"<<endl;
				cout<<"Celsius degree="<<c;
				break;
			}
			case 2:
			{
					float mile,kilo;
					cout<<"Enter Distance in miles=";
					cin>>mile;
					kilo=mile*1.609;
					cout<<"Conversion of miles into kilometer "<<endl<<endl;
					cout<<kilo<<" Km";
			
				break;
			}
			case 3:
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
			
				break;
			}
			case 4:
			{
				int n=1;
				cout<<"Number\tSquare\tCube"<<endl<<endl;
				st:
					{
						cout<<n<<"\t"<<n*n<<"\t"<<n*n*n<<endl<<endl;
						n++;
					}
				if(n<=5)
		 			{
		 				goto st;
		 			}
			
				break;
			}
				case 5:
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
			
				break;
			}
				case 6:
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
			
				break;
			}
				case 7:
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
									cout<<endl<<endl<<"All values are Equal";
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
				
				break;
			}
				case 8:
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
				
						break;
			}
				case 9:
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
				
				break;
			}
				case 10:
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
				
				break;
			}
				case 11:
			{
				float BS, GS;
				cout<<"Enter Your Basic Salary = ";
				cin>>BS;
				if(BS<=10000)
						{
							GS=BS+ ((20.0/100.0)*BS) + ((80.0/100.0)*BS);
							cout<<"Gross Salary = "<<GS<<endl;
						}
				else if(BS<=20000)
						{
							GS=BS+ ((25.0/100.0)*BS) + ((90.0/100.0)*BS);
							cout<<"Gross Salary = "<<GS<<endl;
						}
					else
						{
							GS=BS+ ((30.0/100.0)*BS) + ((95.0/100.0)*BS);
							cout<<"Gross Salary = "<<GS<<endl;
						}
			
				break;
			}
				case 12:
			{
				float u,b=0,total;
				agai:
				cout<<"Enter units consumed = ";
				cin>>u;
				if(u<0)
					{
						cout<<"you enter wrong unit consumed"<<endl;
						cout<<endl<<"Again Enter units consumed"<<endl;
	 					goto agai;
					}
				if(u>=50)
					{	
						 b=b+50*0.50;
    				}
				u=u-50;
				if(u>=100)
					{
						b=b+100*0.75;
					}
				u=u-100;
				if(u>=100)
					{
						b=b+100*1.20;
					}	
				u=u-100;
				if(u>=1)
					{
	 				  b=b+u*1.50;	
					}
				total=b+(20.0/100.0)*b;
				cout<<endl<<"Total Electricity Bill = Rs."<<total;
			
				break;
			}
			default:
				{
					cout<<endl<<endl<<"You enter Invalid choice";
					goto start;
				}
			
	}
 	cout<<endl<<"**************************************************************"<<endl;
	int ag;
  	cout<<endl<<endl<<"Enter 1 for run again = ";
  	cin>>ag;
	if(ag==1)
	{

		goto start;
	}
	getch();
	return 0;
}
