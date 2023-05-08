#include <iostream>
using namespace std;
int main()
{
	int f=1,x,y;

	cout<<"Enter the number ";
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		f = f*i;
	}
	cout<<f;

}
