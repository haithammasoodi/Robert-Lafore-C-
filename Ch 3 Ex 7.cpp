#include <iostream>
using namespace std;
int main()
{
	float r,y,a;
	cout<<"Enter the first amount: ";
	cin>>a;
	cout<<"Enter the number of years: ";
	cin>>y;
	cout<<"Enter the interest rate: ";
	cin>>r;
	float in=r/100;
	for(int i=1;i<=y;i++)
	{
		a=a+(a*in);
		
	}
	cout<<"At the end of "<<y<<" years, you`ll have $"<<a<<endl;
}
