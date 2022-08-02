#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
int opt,row,triop,num;
char cha;
cout<<"Input the your favorite character for the shape"<<endl;
cin>>cha;
cout<<"*********TABLE*******************"<<endl;
cout<<"Press 1 for triangle,2 for square and 3 for rectangle"<<endl;
cin>>opt;
switch(opt)
{
	case 1:
		cout<<"Input the type of triangle you want with the given options "<<endl<<"1-Right-angled Triangle ,2-Inverted triangle,3-Pyramid Triangle "<<endl;
		cin>>triop;
		if(triop==1)
		{
			cout<<"Input the number of rows you want in your triangle "<<endl;
			cin>>row;

				for (int i = 1; i <=row; ++i)
				{
					for (int a = 1; a <=i; ++a)
					{
						cout<<cha;
					}
				cout<<endl;
				}
		}
		else if(triop==2)
		{
			cout<<"Input the number of rows you want in your triangle "<<endl;
			cin>>row;
			
				for (int i = row; i >0 ;--i)
				{
					for (int a = i; a >0; --a)
					{
						cout<<cha;
					}
				cout<<endl;
				}
		}
		else if(triop==3)//Pyramid
		{
			cout<<"Input the number of rows you want in your triangle "<<endl;
			cin>>row;
			
				for (int i = 1; i<=row ;++i)
				{
					for (int b=(row-i);b>0;--b)
					{
						cout<<" ";
					}
					for (int b = ((i*2)-1); b>0; --b)
					{
						cout<<cha;
					}
					cout<<endl; 
				}
		}
		else
		{
			cout<<"Incorrect Input for Triangle";
		}
		break;
		case 2:
			cout<<"Input the number of rows you want in your square "<<endl;
			cin>>row;
			for (int i = 0; i < row; ++i)
			{	
				for (int i = 0; i < row; ++i)
				{		
					cout<<cha;
				}
			cout<<endl;
			}	
		break;

		case 3:
		cout<<"Input the number of rows you want in your rectangle  "<<endl;
		cin>>row;
		cout<<"Input the number of characters per row  you want in your rectangle  "<<endl;
		cin>>num;
			for (int i = 0; i < row; ++i)
			{	
				for (int a = 0; a < num; ++a)
				{		
					cout<<cha;
				}
			cout<<endl;
			}	
		break;
		}
	}
