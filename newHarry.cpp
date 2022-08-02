#include<iostream>
#include<string>
using std::cout ;
using std::cin ;
using std::string ;
using std::endl ; 
namespace leap
{
	int yeartot=366 ; 
}
namespace noleap
{
	int yeartot=365 ;
}
//add an if else statement in case the date is hiher than 31
int main()
{
int montot{} ,date{} ,end {} , year {},detleap {} ,yeartot{};
string month ;
cout <<"Enter the year : " ;
cin>> year  ;
detleap= year % 4 ;

cout<<"Input the first 3 letters of the month ,or the number of the month and date and we will tell you how many days are  left in the month   " << endl;
cin >> month ;

if (month == "jan" || month =="Jan" || month =="Mar" || month =="may" || month =="May"|| month =="mar"|| month== "Jul" || month=="jul" || month=="Aug" || month=="aug" || month=="Oct"|| month=="oct"|| month=="Dec"|| month=="dec" || month=="1"|| month=="3"|| month=="5"|| month=="7"|| month=="8"  || month=="10" || month=="12" )
	{
		montot=31 ;
		cout << "Enter the current date " ;
		cin>> date ;
		end=montot-date;
		cout <<"There are "  << end << "  days left in this month" ; 
	
	}
else if (month == "apr" || month == "jun" ||month == "sep" ||month == "nov" ||month == "Apr" ||month == "Jun" ||month == "Sep" ||month == "4" ||month == "6" ||month == "9" ||month == "11" ) 
	{
		montot=30 ;
		cout << "Enter the current date " ;
		cin>> date ;
		end=montot-date;
		cout <<"There are "  << end << "  days left in this month"  ; 
	
	}
else if (month=="feb" || month == "Feb"|| month == "2")
	{
		if (detleap==0)
		{
			cout<<"This is a leap year";
			montot=29 ;
			cout << "Enter the current date " ;
			cin>> date ;
			end=montot-date;
			cout <<"There are "  << end << "  days left in this month"  ; 
		}
		else
		{
			cout<<"This is not a leap year";
			montot=28 ;
			cout << "Enter the current date " ;
			cin>> date ;
			end=montot-date;
			cout <<"There are "  << end << "  days left in this month"  ; 
		}		
	}

else
	{
		cout<<"Incorrect input ,please try again" ;
	}

cout<<"End of program" ;

}