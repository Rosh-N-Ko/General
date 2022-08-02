#include <iostream>
#include <string>
using std::cout ;
using std::endl;
using std::cin;
using std::string;

int dist(string s1,string s2)
{
	int a.sum;
	for (auto i:s1.length())
	{
		a=(int)s1[i]-(int)s2[i];
		sum+=a;
	}
return sum;
}

int main ()
{
	string s1,s2;
	cout<<"Enter 2 words "<<endl<<"Word 1:";
	getline(cin,s1);
	cout<<endl<<"Word 2 :";
	getline(cin,s2);
	cout<<dist(s1,s2);
	
	return 0;
}