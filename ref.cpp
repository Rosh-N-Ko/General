#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
int main()	
{

int a,&b=a,&c=a;
float &d=float(a);
a=10;
cout<<"a is :"<<a<<endl;
c=15;
cout<<"a is now"<<a<<endl;
d=25;
cout<<"b  is "<< b<<"and a is "<<a;


}	