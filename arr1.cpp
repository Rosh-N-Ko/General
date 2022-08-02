#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    
	int temp {0},si {},a{};
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
	for (int i=0;i<si;i++)
	{
		if(arr[i]>temp)
		{
		 temp=arr[i];
		}
		cout<<endl;
	}
	cout<<"The biggest element in the array is "<<temp<<endl;
}



