#include<iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
//Part 1 is simple CI,part willinclude inflation and comaprison to an average fd,
//part 3adding commas to to amount of money  adding option for sips,,comparison with lumpsum CI


float comp(float p,float r,float t)
{
	float ca=0,ci=0;
	ca=p*pow ((1+r/100),t);
	ci=ca-p;
	return ci;
}


int main ()
{
	float p,r,t,ca,ci;
	cout<<"Enter principal amount "<<endl;
	cin>>p;
	cout<<"Enter monthly interest  rate ";
	cin>>r;
	cout<<"Whats your investment time period in years"<<endl;
	cin>>t;
	ci=comp(p,r,t);
	cout<<"The compound interest earned is Rs "<<ci;
	float total=ci+p;
	cout<<"The compounded amount is Rs."<<total;
	
}




//	cout<<"The interest you will have earned in total for "<<tim<<"years is "<<compi;

	/*cout<<"ae you planning for a lumpsum investment or a monthly SIP";
	cin>>invtype;

	if( invtype=="SIP"||"sip"||"Sip"||"SIp")
	{

*/
  



