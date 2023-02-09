/*A program in C++ that uses the library function islower() to check 
whether a letter is uppercase or lowercase*/
#include <iostream>
#include <CTYPE.H>
using namespace std;
int main()
{
	char s;
	int x;
	cout<<"Enter the letter ";
	cin>>s;
    x= islower(s);
    if(x==0)
    {
    	cout<<"Letter is uppercase";
	}
	else
	{
		cout<<"Letter is lowercase";
	}
}
