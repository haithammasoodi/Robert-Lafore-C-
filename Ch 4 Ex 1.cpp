#include <iostream>
using namespace std;
struct phone
{
	int ar,ex,num;
};
int main()
{
	phone p1,p2;
	cout<<"Enter your area code, exchange and number: ";
	cin>>p2.ar>>p2.ex>>p2.num;
	p1.ar=212;
	p1.ex=767;
	p1.num=8900;
	cout<<"My number is ("<<p1.ar<<") "<<p1.ex<<"-"<<p1.num<<endl;
	cout<<"Your number is ("<<p2.ar<<") "<<p2.ex<<"-"<<p2.num<<endl;
}
