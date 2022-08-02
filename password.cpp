#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int a,pin,ctr=1;
	a=1234;
	cout<<"Enter you guess for the pin ";
		do {
			cin>>pin;
			if(pin!=a)
		
			cout<<"Your pin is wrong , please  try again  ";
			ctr++;	
			}
		while (ctr<=3&&pin!=a);
		if (pin==a&&ctr<=41)
			{cout<<"Your pin has been accepted , please proceed .";
	}


}