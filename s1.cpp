#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;


string reverse(string s,int l)
{
	string s1=s;
	int j=0; 
	for (int i = s1.length()-1; i >=0; --i)
	{
		s[j]=s1[i];
		j++;
	}
	return s;
}
int main()
{
int len;
string s,s1;
cout<<"Input a string"<<endl;
cin>>s ;
len=s.length();
cout<<"The original string is "<<s<<endl;
cout<<"The reversed string is "<<reverse(s,len)<<endl;
}

