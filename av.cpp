#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
int a,av=0,b;
cout<<"ENter the number of grades to be entered  ";
cin>>a;//5
for (int i=1;i<=a;i++)//makes sure that input taken is only 5
	{
		do
		{
			cout<<"Enter grade "<<i<<" : " <<endl;
			cin>>b;//6
					//eillnow rerun code since failure condition has been met
		}   while (b<1||b>5);//failure for correct range of input
	av+=b;
	}	
	cout<<"The average of the grades that you have entered is  "<<(float)av/a ;
}