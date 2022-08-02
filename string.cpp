#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string str;
	cout<<"Input a string and we'll replace all vowels with #"<<endl;
	cin>>str;
	int a=str.length();
	for (int i = 0; i <a ; ++i)
	{
		char b=str[i];
		if (b=='a'|| b=='e'||b=='i'||b=='o'||b=='u')
		{
			b='#';
			cout<<b;
		}
		else{cout<<b;}
	
	}
}
