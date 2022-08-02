#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	//finding the minimum element adn swapping it with the first element in the array as long as it meets the condition  
	int n,opt,b,c;
	//finding the minimum element adn swapping it with the first element in the array as long as it meets the condition  
	cout<<"Input the number elements you wish to have in your array";
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cout<<"Element : "<<i<<endl;
		cin>>arr[i];
	}
	 cout<<"Choose if you wish to go for selection sort ,or bubble sort or insertion sort \n1-Selection sort \n2.Bubble sort \n3.Insertion sort ";
	cin>>opt;
	switch (opt)
	{
		case 1:
		{
			for(int i =0;i<b-1;i++)//i=10,j=9
			 {
			 	for(int j=i+1;j<b;j++)//i=10,j=9
			 	{	
			 		if(arr[j]<arr[i])//9<10
			 		{
			 			int temp=arr[j];//temp=9
			 			arr[j]=arr[i];//arr[j]=10-holding the bigger value 
			 			arr[i]=temp;//arr[i]=
		//sorted array will change from {10,9} to {9,10}	 			
		 			}
	 			}
	 		}
			cout<<"Sorted array is :"<<endl;
			for (int i = 0; i < b; ++i)
			{
				cout<<arr[i]<<" ";
			}
		}
