#include <iostream>
using namespace std;
struct date
{
	int d,m,y;
};
int main()
{
	date s1;
	cout<<"Enter Date in format dd/mm/yyyy ";
	cin>>s1.d>>s1.m>>s1.y;
	cout<<s1.d<<"/"<<s1.m<<"/"<<s1.y;
	
}
