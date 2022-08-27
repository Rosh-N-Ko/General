#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


void display(vector<int>&v)
{
    for (int i  = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main ()
{
int opt,a;
vector<int>pu;
cout<<"This program , is a toolbox for many vector functions"<<endl<<"choose from the options below which method you wish to see and use ";
cout<<"1:pushback"<<endl<<"2.popback"<<endl;
cin>>opt;
switch(opt)
{
case 1:
{
    cout<<"Enter an element to add this vector  "<<endl;
    for (int i=0;i<3;i++)
    {
        cin>>a;
        pu.push_back(a);
        cout<<endl;
    }
display(pu);
break;
case 2:
{
cout<<"Enter an element to add this vector  "<<endl;
    vector<int>pu;
    for (int i=0;i<3;i++)
    {
        cin>>a;
        pu.push_back(a);
        cout<<endl;
    }
    cout<<"Before pop back "<<endl;
    display(pu);
    pu.pop_back();
    cout<<"After  pop back "<<endl;
    display(pu);
}
break;
case 3
{

}
}
}
}
