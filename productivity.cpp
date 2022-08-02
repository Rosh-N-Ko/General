//simplel productivity calulator
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	float tot,use,prod;
	cout<<"Enter the total number of free hours you had today"<<endl;
	cin>>tot;
	cout<<"Enter the approximate number of free hours you used that time productively for studies "<<endl;
	cin>>use;
	prod=use/tot;
	prod*=100;
	cout<<prod;
	cout<<"The percentage of your productivity was "<<prod<<" % "<<endl;
	if(prod>=80&&prod<=100)
	{
		cout<<"Good job i am proud of you";
	}
	else if(prod>=60&&prod<=80)
	{
	cout<<"not bad but there is room for improvement ";
	}
	else if(prod>=40&&prod<=60)
	{
	cout<<"You have studied today but please try to be more productive next time ";
	}
	else if(prod<=40)
	{
	cout<<"I hope that this a temperoray lapse in your judgement ,see that this does not become a pattern later on\n STOP WASTING  YOUR  TIME  ";
	}
}