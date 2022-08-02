#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int a,b=1 ;
cout<<"Enter the number and we'll calculate its factorial"<<endl;
cin>>a;
for (int i=a;i>0;i--)
{
b=i*b;

}
cout<<"The factorial of "<<a <<" is " <<b;
}
