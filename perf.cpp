#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
int main()	
{
	int low,up,mod,ctr=0;
	cout<<"ENter range of numbers and we'll display the perfect numbers and prime numbers between that range "<<endl;
	cout<<"Enter the lower limit"<<endl;
	cin>>low;
	cout<<"Enter the upper limit"<<endl;
	cin>>up;
	cout<<"PRime numbers between  "<<low <<" and " <<up<<" are :"<<endl;
	for (int i = low; i <=up; ++i)
	 	{
	 		for (int a = 1; a <=i; ++a)
	 		{

	 			  if (i%a==0)
	 				{
		 				ctr++;
	 	 			}
	 		}
	 		if (ctr==2)
	 		{
	 			cout<<i<<endl;
	 		}
	 	ctr=0;//Where i made the mistake   
	 	}
	 	cout<<"The perefect numbers between "<<low<<"and "<<up <<"are :"<<endl;
for (int j = low; j < up; ++j)
{
	for (int b= 1; b <j; ++b)
	{
		if(j%b==0)
		{
			ctr+=b;
        }
	}
	if (ctr==j)
	{
			cout<<j<<endl;
	}
	ctr=0;
}
}
