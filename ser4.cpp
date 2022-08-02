#include <iostream>
using std ::cout;
using std ::cin;
using std ::endl;


int main()
{
	int ctr=0,sum=0,i,n,j;
	cout<<"Enter n and we will present the series ";
	cin>>n;
		for(i=1;i<=n;++i)
		{ 
			ctr+=i;
				for(j=1;j<=i;++j)
				{
					if(j<i)
					cout<<j<<"+";
					else
					cout<<j;
				}
				cout<<"="<<ctr<<endl;
				sum+=ctr;		
	}
	cout<<"The sum of this series is "<<sum;
}
