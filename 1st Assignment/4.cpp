/*
4. Write a program that displays the following output:
Number	      Square 	       Cube
1	      1 		1
2 	      4 		8
3 	      9 		27
4 	     16 	        64
5 	     25                 125
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=1;
	cout<<"Number\tSquare\tCube"<<endl<<endl;
	start:
		{
			cout<<n<<"\t"<<n*n<<"\t"<<n*n*n<<endl<<endl;
			n++;
		}
		if(n<=5)
		 {
		 	goto start;
		 }
		getch();
		return 0;
}
