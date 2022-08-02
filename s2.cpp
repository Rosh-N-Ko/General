#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

//error: no match for 'operator*'

void reverse(string * s,string * s1 ,int l)
{
	int j=0;
	for (int i = l-1; i >= 0; --i)
	{
		*s1[j]=*s[i];
		j++;
	}
}
int main()
{
int l;
string s,s1;

cout<<"Input a string"<<endl;
cin>>s ;
s1=s;
l=s.length();
reverse(&s,&s1,l);
cout<<"The changed string is "<<s1;
}


