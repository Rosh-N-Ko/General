//Casear cypher-Thhis code was copied cause i couldn't do it 
#include <iostream>
#include <string>
using std::cout ;
using std::endl;
using std::cin;
using std::string;

int main()
{
	int j=0,key{};
	string s,dir;
	char ch;
	cout<<"Enter a string and we cipher or decipher it "<<endl;
	getline(cin,s);
	cout<<"Enter desired direction"<<endl;
	cin>>dir;
	cout<<"Enter desired key "<<endl;
	cin>>key;
	if(dir=="right"||dir=="Right"||dir=="rIght"||dir=="riGht"||dir=="rigHt"||dir=="righT"||dir=="RIght"||dir=="rIGht"||dir=="riGHt"||dir=="rigHT"||dir=="RIGht"||dir=="rIGHt"||dir=="riGHT"||dir=="RIGHT")
	{
	//right(key,dir);
	
		for (int i = 0; s[i]!='/0'; ++i)
		{
		    ch=s[i];
			if(ch>=a&&ch<=z)
			{
				ch=ch+key;
			}
		}	
	}	
	
	
	
	
	
	
	
	
	
	
	if(dir=="LEFT"||dir=="left")
	{
		for (int i = 0; i < s.length(); ++i)
		{
			char c=s[i];
			j=(int)c-key;
			s[i]=(char)j;
		    j=0;c=' ';
		    
		}
	if(j<65 && key!=0)
			{
				j=90;
			}
	}
		
	cout<<"This is the changed string "<<s;
}