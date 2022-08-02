#include <iostream>
#include <fstream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::ofstream;
using std::fstream;
using std::string ;
using std::ios;


//The idea behind this program is to track my gym progress 

int main ()
{
	int reps,sets;
	ofstream file;
	cout<<"Enter the baseline reps that you wish to achieve ";
	//while file.open(gym.txt)
	file.open("gym.txt",ios::out);
	{
		file<<"The number of reps i Wish to achieve are 20 ";
		file<<"The number of sets i wish to achieve are 3";
		file.close();
	}


}