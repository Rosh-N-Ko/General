#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void reverse(string* s,string* s1,int l)
{
	j=0; 
	for (int i = l; i >=0; --i)
	{
		*s[i]=*s1[j];
		j++;
	}
}

int main()
{
int len;
string s,s1;
cout<<"Input a string";
cin>>s ;
len=s.length();
reverse(&s,&s1,len);
cout<<"The original string is "<<s;
cout<<"The reversed string is "<<s1;
}

