#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n,j=1,sum=0;
	cout<<"Input the value of the nth term for this series :"<<endl;
	cin>>n;
for (int i = 1; i <=n; ++i)
{
	j =i*i;
	cout<<i<<"^2= "<<j<<endl;
	sum+=j;
	j=1;
}
cout<<"The sum of this series is "<<sum<<endl;

}