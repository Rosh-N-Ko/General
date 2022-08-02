#include <iostream>//write a for loop to input a the elemnets in the array ,thats why its showing an emptty array
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

void lexi( string *ptr,int len)
{
	for (int i = 0; i < len; ++i)
	{
		if(*(ptr+i)>*(ptr+i+1))
		{
			string temp=*(ptr+i);
			*(ptr+i)=*(ptr+i+1);
			*(ptr+i+1)=temp;
		}
	}
}
int main()
{
	int counter=1,c,d,a=0;
	string s,s2=" ";  
	cout<<"Enter a sentence and we will print out the sentence in lexicographical order ";
	getline(cin,s);

	for (int i = 0; i < s.length(); ++i)
	{
		c=(int)s[i];
		d=(int)s[i+1];
		if((c==32)&&((d>=65&&d<=90)||d>=97&&d<=122))//if c is a space or an interstecial character and the next character is a letter 
		{
			counter++;		
		}
	}

	cout<<"There are  "<<counter <<" words in this sentence";
	string arr[counter];

	for (int i = 0; i <=s.length(); ++i)
	{
		c=(int)s[i];
		d=(int)s[i+1];
		if((c>=65&&c<=90)||(c>=97&&c<=122)||s[i+1]=='\0')//if c is a space or an interstecial character and the next character is a letter 
		{
			s2.push_back(s[i]);
		}
		if (c==32||c==46||s[i]=='\0')
		{
			if (a<counter)	
			{
				arr[a]=s2;	
			}
			s2=" ";
			a++;
		}
	}
	for (int i = 0; i < counter; ++i)
	{
		cout<<(arr[i])<<" ";
	}
	lexi(arr,counter);	
	cout<<"The sorted array is as follows \n";
	for (int i = 0; i < counter; ++i)
	{
		cout<<(arr[i])<<" ";
	}
}
