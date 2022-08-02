#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// void sel(int arr[],int b)//the smallestnumber reaches the correct position in the first iteration 

	 
// void bub(int arr[],int b)//The biggest number reaches the right position in the firt iteration 
// {
// void ins(int arr[],int b)//Insert an element from the unsorted array to the correct position in the sorted array 
// {
	//arr={10,25,18,25}
	
int main()
{
	//finding the minimum element adn swapping it with the first element in the array as long as it meets the condition  
	int n,opt,b,c;
	cout<<"selection sort ";//finding the minimum element adn swapping it with the first element in the array as long as it meets the condition  
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
			for(int i =0;i<n-1;i++)//i=10,j=9
			 {
			 	for(int j=i+1;j<n;j++)//i=10,j=9
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
			for (int i = 0; i < n; ++i)
			{
				cout<<arr[i]<<" ";
			}
		}
		break;
		case 2:	
		{
			for (int i = 1; i <n ; ++i)
			{
				for (int j = 1; j < n-i; ++j)
				{
					if(arr[j]>arr[j+1])
					{
						int temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}		
				}
			}
			cout<<"Sorted array is :"<<endl;
			for (int i = 0; i < n; ++i)
			{
				cout<<arr[i]<<" ";
			}
		}
		break;

		case 3:
		{
			int d=b;
			for (int i = 1; i <n ; ++i)//it 1={10,25,18,35},it 2={10,18,25,35
			{
				int current =arr[i],j=i-1;//curr=25,j=0=10//curr=arr[2]=18,j=1=25;
				while (arr[j]>current&&j>=0)//while 10>25//while 25>18
				{
					arr[j+1]=arr[j];//not app//arr[2]=arr[1]=25;
					j--;//j=0
				}
			arr[j+1]=current;//element indexx 1=25//
			}
	cout<<"Sorted array is :"<<endl;
	for (int c = 0; c < n; ++c)
	{
		cout<<arr[c]<<" ";
	}
	}
		break;	
	}
}



