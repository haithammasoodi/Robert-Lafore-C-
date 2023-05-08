#include <iostream>
using namespace std;
struct employee
{
	int en,ec;
};
int main()
{
	employee e1,e2,e3;
	cout<<"Enter the data for 1st employee ";
	cin>>e1.ec>>e1.en;
	cout<<"Enter the data for 2nd employee ";
	cin>>e2.ec>>e2.en;
	cout<<"Enter the data for 3rd employee ";
	cin>>e3.ec>>e3.en;
	
	cout<<"Employee Number \t Employee Compensation\n";
	cout<<e1.ec<<" \t \t \t "<<e1.en<<endl;
	cout<<e2.ec<<" \t \t \t "<<e2.en<<endl;
	cout<<e3.ec<<" \t \t \t "<<e3.en;
}
