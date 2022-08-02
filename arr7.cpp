#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int temp {0},si {},a{},el{},c{};
	cout<<"Enter the size of the array  ";
	cin>>si;
	int arr[si];
	cout<<"Enter each element "<<endl;
	for(int i=0;i<si;i++)
	{
		cin>>a;
		arr[i]=a;
		cout<<endl;
	}
	for (int i = 0; i < si; ++i)
	{
		int temp=arr[i];
		for (int j = 0; j<si; ++j)
		{
			int temp2=arr[j];
			if(arr[i]==arr[j])
			{
				int c+=1;
			}
		}

	}