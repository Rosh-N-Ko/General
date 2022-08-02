#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	cout<<:"This is an array "<<endl;
	int arr[] {1,3,5,8,7};
	for(auto val:arr)
	{
		cout<<val<<std::endl;
	}
}
