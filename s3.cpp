#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

string sadd(string s1,int l)
{
	string s2=s1;
	char c=' ';
	int t=0;
	for (int i = 0; i <=l; ++i)
	{
	t=(int)s1[i];
		switch(t)
		{
			case 32:{
			s2[i]=(char)t;
			break;
			}
			case 34:{
			s2[i]=(char)t;
			break;
			}
			case 46:{
			s2[i]=(char)t;
			break;
			}
			case 20:{
			t-=25;
			s2[i]=(char)t;	
			break;
			}
			case 122:{
			t=(int)s1[i];		
			t-=25;
			s2[i]=(char)t;	
			break;
			}
			default:{
			t+=1;
			s2[i]=(char)t;	
			break;
			} 	
		}
		t=0;
	}
	return s2;
}
int main()
{
	string s1,s2;
	int l=0,t;
	char c;
	cout<<"Input a sentence and we will cipher it ";
	getline(cin,s1);
	l=s1.length();
	cout<<s1<<endl;
	cout<<"The original string is "<<s1<<endl;
	cout<<"THe ciphered string is "<<sadd(s1,l)<<endl;
}

	// char ex='c';
	// cout<<(int)ex;
	// char ew=(int)ex+1;
	// cout<<ew;