/*A program in C++ to convert temperature from Celsius to Farenheit*/
#include <iostream>
using namespace std;
int main()
{
	float cel,far;
	cout<<"Enter the Temperature in Celsius ";
	cin>>cel;
	far = (cel * 9/5) + 32;
	cout<<"The Temperature in Farenheit is "<<far;
}
