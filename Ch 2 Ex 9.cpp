/*A program in C++ to display sum of two fractions in fractional form*/
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter the first fraction: ";
	cin>>a>>b;
	cout<<a<<"/"<<b<<endl;
	cout<<"Enter the second fraction: ";
	cin>>c>>d;
	cout<<c<<"/"<<d<<endl;
	cout<<"Sum = "<<(a*d) + (b*c)<<"/"<<(b*d);
}
