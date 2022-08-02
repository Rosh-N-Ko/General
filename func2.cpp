#include <iostream>
using std::cout;
using std::cin;
using std::endl;
bool prime(int a)
	{
bool c=true;
		for (int i = 2; i < a; ++i)
		{
			if (a%i==0)
				{
				return false ;
				}
		}
		return c;
	}	
	int main()
	{
	int a;
	bool b;
	cout<<"Enter and number and we will tell you if that number is a prime number or not";
	cin>>a;
	b=prime(a);
	if(b==true)
	{
		cout<<a<<"  is a prime number";
	}
	else
	{
		cout<<a<<"  is not a prime number";
	}

}
