#include <iostream>
using namespace std;
int main ()
{
	float x,f,c;
	cout<<"Type 1 to convert far to cel,"<<endl<<"Type 2 to convert cel to far: ";
	cin>>x;
	
	if(x==1)
	{
		cout<<"Enter Temp in far: ";
		cin>>f;
		c = 5.0/9.0*(f-32.0);
		cout<<"In Celsius that's "<<c;
	}
	else if(x==2)
	{
		cout<<"Enter Temp in cel: ";
		cin>>c;
		f = (c*9.0/5.0)+32.0;
		cout<<"In Farenheit that's "<<f;
	}
	return 0;
}
