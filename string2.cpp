#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string s1,s2;
	cout<<"Enter an incomplete sentence ";
	getline(cin,s1);
	cout<<"Your string is "<<endl<<s1<<endl<<"enter the rest of the sentence "<<endl;
	getline(cin,s2);
	s1.append(s2);
	cout<<"The complete sentence is :"<<endl<<s1;




}
