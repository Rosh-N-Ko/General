//sort a string 
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int l,opt;
	string s;
	cout <<"Enter a word and we will sort it in an ascending or descending order ";
	cin>>s;
	l=s.length();
	cout<<"Enter option and we will sort it in descending order or ascending order\n 1:Ascending order \n 2.Descending order \n Enter option ";
	cin>>opt;
	switch(opt)
	{
		case 1:
		for (int i = 0; i <l-1; ++i)//{1,9,7,10}
		{
			for (int j = i+1; j<l;++j)
			{
				if(s[j]<s[i])
				{
					char c=s[j];
					s[j]=s[i];	
					s[i]=c;
				}
			}
		}
		break;
		case 2:
		for (int i = 1; i < l; ++i)
		{
			for (int j= 0; j< l-i; ++j)
			{
				if(s[j]<s[j+1])
				{
					char c=s[j];
					s[j]=s[j+1];
					s[j+1]=c;
				}
			}
		}
		cout<<"sorted array is :"<<s;
		break;
		}
	}