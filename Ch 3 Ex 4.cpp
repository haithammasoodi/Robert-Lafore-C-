#include <iostream>
using namespace std;
int main ()
{
	char x,rep;
	double a,b,result;
	do
	{
	
	cout<<"Enter 2 numbers ";
	cin>>a>>b;
	cout<<"Enter +, -, / or * ";
	cin>>x;
	switch(x)
	{
	
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	default:
		cout<<"Invalid operator";
		break;
	}
	cout<<"The result = "<<result<<endl;
	
	cout<<"y for Repeat and n for not ";
	cin>>rep;
	}while(rep!='n' || rep=='y');
	return 0;
}
