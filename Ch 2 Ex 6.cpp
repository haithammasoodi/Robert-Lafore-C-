/*A program in C++ to convert an amount in Dollars to four other monetary units*/
#include <iostream>
using namespace std;
int main()
{
    float usd=0 ,pound=1.487,franc=0.172,deut=0.584,jyen=0.00955;
    cout<<"Enter the USD ";
    cin>>usd;
    cout<<"In Pound= "<<usd/pound
	<<"\nIn Franc= "<<usd/franc
	<<"\nIn deutschemark= "<<usd/deut
	<<"\nIn Japanese Yen= "<<usd/jyen;
    return 0;
}
