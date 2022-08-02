#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int temp {0},si {},a{},el{};
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
	for (int i = 1; i < si-1; ++i)
	{
		for (int j = 0; j < si-i; ++j)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"how many elements do you want ?"<<endl;
	cin>>el;
	for(int i=0;i<el;i++)
	{
		cout<<arr[i]<<endl;
	}
}



