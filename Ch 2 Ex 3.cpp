/*A program in C++ to use integer constant for 10, use arithmetic assignment operator
to generate 20 and a decrement operator to generate 19*/  
#include <iostream>
using namespace std;
int main()
{
	int const x = 10;
	int y=0;
	cout<<x<<endl;
	y+=20;
	cout<<y<<endl;
	y--;
	cout<<y;
}
