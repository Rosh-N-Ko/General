#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void min_max(int num[],int size,int* min ,int* max)
	{
	for (int  i = 0; i < size; ++i)
	{
		if(num[i]<*min)
		*min=num[i];
		if (num[i]>*max)
		*max=num[i];	
	}
}


int main()
{
	int num ;
	cout<<"Enter no. of elements you want in your array ";
	cin>>num;
	int* arr=new int [num];
	for(int i=0;i<num;++i)
	{
		cout<<"Array Element no.  "<<i<<endl;
		cin>>arr[i]; 
	//
	}


	int min=arr[0];
	int max=arr[0];
	min_max(arr,num,&min,&max);
	cout<<"The maximum number from this array is"<<max;
	cout<<"The minimum number from this array is"<<min;

delete [] arr ;
arr=NULL;

}