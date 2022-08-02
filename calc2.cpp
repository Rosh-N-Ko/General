#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
float a,b;
int i,c;
char op;
cout<<"The calculator ";
for (i=1;i<10;i++)
{
cin>> a >>op>> b;	
		switch(op)
		{
			case '+': cout<< a <<op<< b<<"="<<a+b;
			break;
			case '-': cout<< a <<op<< b<<"="<<a-b;
			break;
			case '*': cout<< a <<op<< b<<"="<<a*b;
			break;
			case '/': cout<< a <<op<< b<<"="<<a/b;
			break;
			case '%' :
			bool aint,bint;
			aint=((int) a==a);
			bint=((int) b==b);
			if (aint && bint)
			{
				cout<< a <<op<< b<<"="<< (int) a % (int) b;
			}
			else
			{
				cout<<"Not valid ";
			}
	 		break;
		}
		cout<<endl<<"Type 1 to continue "<<endl;
		cin>>c;
		if(c==1)
		{
			i=1;	
		}
		else
		{
			break;		
		}
	}	
}