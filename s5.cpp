#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string s1,s2=" ",s3=" ";
	cout<<"Input a sentence and we wil output the longest word in that sentence "<<endl;
	getline(cin,s1);
	int j=0,d=0,i=0,l=s1.length();
	
	for (i = 0; i <=l; ++i)// running in 
	{
 		if(s1[i]!=' '&&s1[i]!='\0')//if the iterated character is not a space or the end of the string ,add the number of letter adna the sl=letters to a number and stru=9ng respectively 
		{
 			j++;
			s2.push_back(s1[i]);
		}
		else if((s1[i]=' ' &&s2>s3)||(s1[i+1]='\0'&&s2>s3))		
		{
			d=j;
			s3=s2;
			s2=" ";
			j=0;
		}	
		else if((s1[i]=' '&&s2<s3)||(s1[i+1]='\0'&&s2<s3))
		{
			cout<<s2;
			s2=" ";
			j=0;
		}
	}
	cout<<endl<<"the longest word is  "<<s3<<" which has  "<<d;
}