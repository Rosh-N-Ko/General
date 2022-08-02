#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::string;
using std::cin;
using std::endl;

class neww
{
public:
	string s;
	int age;
void func()
{
    cout<<"This is in a new class"
	cout<<"This is your string "<<s<<endl;
	cout<<"This is your age "<<age<<endl;
}
};

class Employee
{
public:
	string name;
	int age ;
	float sal;
	string company ;	

	void Intro()
	{
		cout<<"Name:----->"<<name<<endl;
		cout<<"Age:----->"<<age<<endl;
		cout<<"Salary:----->"<<sal<<endl;
		cout<<"Company:----->"<<company<<endl;
		cout<<"*********************************"<<endl;
	
	}

};   

int main ()
{
 Employee data1;//Employee is the class and data 1 is the instance of employee
 data1.age=45;
 data1.name="Raj";
 data1.sal=14500;
 data1.company="Sigmore";  
 data1.Intro();

  Employee data2;//Employee is the class and data 1 is the instance of employee
 data2.age=48;
 data2.name="Rani";
 data2.sal=145600;
 data2.company="Ranka";  
 data2.Intro();

 neww obj;//new object obj of class neww
 obj.s="Kill mee";
 obj.age=69;
obj.func();
}


