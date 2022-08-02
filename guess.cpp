#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
int hnum,gnum;
cout<<"Host ,please enter a number ";
cin>>hnum;
system("cls");
cout<<"Guest ,guess which number did the user input and enter your guess ";
cin>>gnum;
(hnum==gnum) ? cout<<"Correct" :cout<<"Failure,Nobody likes you ,you're gonna die alone,I hope your beautiful children get cancer ";
}