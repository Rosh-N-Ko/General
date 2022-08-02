#include <iostream>
using namespace std ;
int main ()
{
	int n, x;
	cout << "Insert n" << endl;
	cin >> n ;

//	cout << cin.fail() << endl; //prints 1 if failedi.e invalid input ,0 if not failed ,so it  
	cin.clear(); //clears the failure from the input stream ,the error flag , but the incorrect input will remain 
	cin.ignore(10000,'\n'); //removes the input ,clears all input for a 1000 characters ,thus preventing consideration of previous errors,,/npushes the program to the next line so that the next line of input can come
	cout << "Insert x" << endl;
	cin >> x ;

	cout << n << endl;
	cout << x ;




}
