 //employee database-Is this data incorrect ?,if so , press yes
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


class AbstractEmp
{
	virtual void Askforprom()=0;
};
class Emp:AbstractEmp
{
    private:
	int ag;
	string na,comp;
	float sa;
public:
	void setna(string name)
	{
		na=name;
	}
	string getna()
	{
	return na;
	}


	void setag(int age)
	{
		ag=age;
	}
	int getag()
	{
	return ag;
	}

	void setcomp(string company)
	{
		comp=company;
	}
	string getcomp()
	{
	return comp;
	}

	void setsal(float salary)
	{
		sa=salary;
	}
	float getsa()
	{
	return sa;
	}



	Emp(string Name,string Company,int Age,float Sal )
	{
		na=Name;
		comp=Company;
		ag=Age;
		sa=Sal;
	}
	void Intro()
	{
		cout<<"Name:----->"<<na<<endl;
		cout<<"Age:----->"<<ag<<endl;
		cout<<"Salary:----->"<<sa<<endl;
		cout<<"Company:----->"<<comp<<endl;
		cout<<"*********************************"<<endl;
	}
	void Askforprom()
	{
		if (ag>=30){
			cout<<na<<"viable for a promotion";
			}
		if(ag<30){
			cout<<na<<"is not viable for a promotion";
			}
	}
};

class Dev:Emp
{
public:
	string prog;
Dev(string Name,string Company,int Age,float Sal,string Prog )
	:Emp(Name,Company,Age,Sal)
	{
		prog=Prog;
	}
void Fix()
{
	cout<<getna()<<"Has fixed bug using "<<prog;
}
};


int main()
{
	string opt1,opt2,name,company ;
	int age;
	float salary;
	cout<<"Enter your name ";
	cin>>name;
	cout<<"Enter your Age";
	cin>>age;
	cout<<"Enter your company ";
	cin>>company;
	cout<<"Enter your salary";
	cin>>salary;
	
	Emp data1=Emp(name,company,age,salary);
	data1.Intro();
// 	cout<<"If there a mistake in your credentials ,please type yes ,if not type anything else "<<endl;
// 	cin>>opt1;
// 	if(opt1=="yes"||opt1=="Yes"||opt1=="yEs"||opt1=="yeS"||opt1=="YES")
// 	{
// 		cout<<"WHich credential do you wish to change ";
// 		cin>>opt2;
// 		if (opt2=="age"||opt2=="AGe"||opt2=="aGe"||opt2=="agE"||opt2=="AGE"||opt2=="aGE")
// 		{
// 			cout<<"Enter the right age ";
// 			int ag;
// 			cin>>ag;
// 			data1.setag(ag);
// 		}
// 	}
	
// 	data1.Intro();
// 	data1.Askforprom();
	Dev d=Dev("Eggman","Sleep",200,10000.5,"c++");
	d.Fix();
}

