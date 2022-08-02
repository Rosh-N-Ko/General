#include <iostream>//write a for loop to input a the elemnets in the array ,thats why its showing an empty array
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string s;
	cout<<"Enter a word and we will sort it for you ";
	cin>>s;
	int l=s.length();
	for (int k = 1; k < l-1; ++k)
	{
	    for(int i=0;i<l-k;++i)
	    {
		if(s[i]<s[i+1])
		{
			char c=s[i];
			s[i]=s[i+1];
			s[i+1]=c;
		}
	}
	}
	cout<<"Descending order  "<<s<<endl;
	for (int k = 1; k < l-1; ++k)
	{
		for (int i = 0; i <l-k ; ++i)
			if(s[i]>s[i+1])
			{
				char c=s[i];
				s[i]=s[i+1];
				s[i+1]=c;
			}
		}
cout<<"Ascending order   "<<s<<endl;
}