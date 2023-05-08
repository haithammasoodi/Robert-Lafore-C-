#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number ";
	cin>>n;
	for(i=1;i<=200;i++)
	{
		cout<<n*i<<"\t";
		if(i%10==0)
		{
			cout<<endl;
		}
	}
}
