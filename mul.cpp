#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int low,up,end;
	cout<<"Enter the range of numbers for the multiplication table that you need "<<endl;
	cout<<"Enter lower limit ";
	cin>>low;
	cout<<"Enter upper limit ";
	cin>>up;
	cout<<"Which number do you want each table to end ";
	cin>>end;
	for (int i = low; i <=up; ++i)
	{
		cout<<"Table of "<<i<<" : "<<endl;
		for (int a=1; a <=end; ++a)
		{
			cout<< i << " * "<< a << "=" << i*a << endl;
		}
	cout<<"************************************"<<endl;
	}
}