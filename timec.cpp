#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::cin;
using std::endl;
int main()
{
	double time ,sleep,eat,phone;
	time=24;
	int cat,i=1;
	string s,cat1,cat2,cat3; 
	cout<<"This is a time calculator "<<endl;
	while (i==1)
	{
		cout<<"You have 24 hours each day \nHow many hours do you wish to sleep ";
		cin>>sleep;
		time-=sleep;
		cout<<"How much time do you spend eating , bathing and attending to normal human stuff";
		cin>>eat;
		time-=eat; 
		cout<<"How many hours do you waste on your phone "<<endl;
		cin>>phone;
		time-=phone;
		cout<<"You have  "<<time<<"hours left per day "; 
		cout<<"do you wish to restart";
		cin>>s;
		if(s=="no"||"No" ||"NO" ||"nO")
	  	{
	  		i=0;
	  	}
	  	else if(s=="yes"||"Yes"||"YES"||"yEs")
		{	 
			i=1;
		}
		else 
		{
			cout<<"incorect input.Try again";
			i=1;
		}
	}
}


	//cout<<"Do you wish to add any more categories for dividing your time ?\n Enter end to end the program ";
		//scin>> s; 

	/*if
		cout<<"HOw may more categories do you wish to add ?";
		cin>>cat;
	}
	
	*/
	