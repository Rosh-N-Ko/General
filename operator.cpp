#include <iostream>
#include <string>
int main ()
{
	float x {} , y {} , sum {} ,diff {} , prod {} ,div {} ;
	std::cout << "Input 2 numbers for calculation" << std::endl ;
	std::cout <<" Input x " ;
	std::cin >> x ;
	std::cout <<" Input y " ;
	std::cin >> y ;
	sum = x + y ;
	diff =x - y ;
	prod = x*y ;
	div = x/y;
	std::cout << x << std::endl ; 
	std::cout << y << std::endl ;
	std::cout <<"The sum of these numbers is " << std::endl; 
	std::cout<< sum << std::endl ; 
	std::cout <<"The difference between these numbers is " << std::endl; 
	std::cout<< diff << std::endl ;
	std::cout <<"The product of these numbers is " << std::endl; 
	std::cout<< prod << std::endl ;
	std::cout <<"The quotient of these numbers is " << std::endl; 
	std::cout<< div << std::endl ;
	return 0;

}