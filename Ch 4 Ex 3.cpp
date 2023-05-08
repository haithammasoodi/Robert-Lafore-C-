#include <iostream>
using namespace std;
struct Distance
{
	int ft;
	float in;
};
struct Volume
{
	Distance l,b,h;
};
int main()
{
	float ln,br,ht;
	Volume room1={{12,2.9},{11,9.8},{13,1.1}};
	
	ln = room1.l.ft + room1.l.in/12.0;
	br = room1.b.ft + room1.b.in/12.0;
	ht = room1.h.ft + room1.h.in/12.0;
	
	cout<<"Volume = "<<ln*br*ht<<" cubic feet";
}
