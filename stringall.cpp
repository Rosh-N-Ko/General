#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	// cout<<"Enter an incomplete sentence ";
	// getline(cin,s1);//getline gets all the sentence and spaces , cin get the firts word;
	// cout<<"Your string is "<<endl<<s1<<endl<<"enter the rest of the sentence "<<endl;
	// getline(cin,s2);
	// s1.append(s2);//joins to strings together and now s1 is changed to inlude all the input 
	// s1=s1+s2;//also appends the 2;
	// cout<<"The complete sentence is :"<<endl<<s1;
	// cout<<"The complete sentence is :"<<endl<<s1+s2;//outputs the 2 strings as 1 though the values in the string variables do not change 
	s3="abc";
	s4="xyza";
	cout<<s4.compare(s3);
cout<<s3.compare(s4);

}
