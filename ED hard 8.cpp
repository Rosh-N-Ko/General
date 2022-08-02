#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;



int sharedLetters(string s1,string s2)
{
    cout<<"here";
	int a,b;
	a=s1.length();
	b=s2.length();
	int count=0;
	string s3;
	if(a<b)
	sharedLetters(s2,s1);
for (int i = 0; i <a; ++i)
	{
		for (int j= 0; i < b; ++j)
		{
			if(s1[i]=s2[j]);
			{
				count++;
				s3.push_back(s2[j]);
				s3.push_back(',');
			
}		}
	}
	return count;

}
int main()
{
	string s1,s2;
	cout<<"Enter string 1"<<endl;
	cin>>s1;
    cout<<"Enter string 2"<<endl;
	cin>>s2;
    cout<<sharedLetters(s1,s2);
}
