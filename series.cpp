#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n;
	float j=1.0;
	cout<<"Input the value of the nth term for this series :"<<endl;
	cin>>n;
for (int i = 1; i <=n; ++i)
{
	j *=i;
cout<<"1/"<<i<<"^2= "<<1/j<<endl;
}
}