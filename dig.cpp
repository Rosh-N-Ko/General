#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	cout <<"Enter a number and we will count the digits ,reverse them ,add them and multiply them  ";
	int a,last=0,rev=0,dig=0,i,neww,new1,new3,new2,nl=0,nl2=1;
	cin>>a;
	neww=a;
	new1=a;
	new2=a;
	new3=a;
while (neww!=0)
	{
		neww/=10;
		dig++;
	}
	cout<<"THe number of digits is "<<dig<<endl;

while (new1!=0)//456
	{		
		rev*=10;
		last=new1%10;
		rev+=last;
		new1/=10;

	}
	cout<<"Reversed Number :"<<rev<<endl;


while (new2!=0)//Added numbers 456
	{		
		nl+=new2%10;//6
		new2/=10;

	}
	cout<<"sum of all the digits  :"<<nl<<endl;

	while (new3!=0)//product of all teh numebers-456
	{		
		nl2*=new3%10;
		new3/=10;

	}
cout<<"The product of all the digits  :"<<nl2<<endl;

}




