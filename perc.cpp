#include<iostream>
#include<string>
using std::cout ;
using std::cin ;
using std::string ;
using std::endl ; 
 
 int main()
 {
 	float num,den,perc ;
cout<<"This program is to calculate percentages based on given inputs " <<endl;
cout<<"Enter the numerator " << endl;
cin>>num;
cout<<"Enter the denominator"<< endl;
cin>>den;
perc=(num*100)/den;
cout<< num << " is " << perc << "% of " << den ;
 }