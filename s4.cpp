#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

string change (string s1,int l)
{
	int t1,t2;
	string s2=s1;
	for (int i = 0; i < l; ++i)
	{
		t1=(int)s1[i];
		t2=(int)s1[i+1];
		if(i==0&&t1>=97&&t1<=122)
		{
		t1-=32;	
		}
		
		if(t1==32&&t2>=97&&t2<=122)
		{
		t2-=32;
		s1[i+1]=(char)t2;
		}
		s2[i]=(char)t1;
		t1=0;
		t2=0;
	}
return s2;
}

int main()
{
	string s1;
	int l;
	cout<<"Input a snetence and we will capitalise the first letter of each word "<<endl	;
	getline(cin,s1);
	l=s1.length();
	cout<<"Heres the original string"<<s1;
	cout<<"Heres's the capped string "<<change(s1,l);
}