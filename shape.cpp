#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int h,w;
	char sym=' ';
	cout<<"Enter Height ";
	cin>>h;
	cout<<"Enter Width";
	cin>>w;
	cout<<"Enter the symbol to used for the shape : ";
	cin>>sym;
	for (int a = 1; a<=h; ++a)
	{
		for (int i = 1; i <=w; ++i)
		{
		cout<<sym<<" ";
		}
		cout<<endl;
	}
}