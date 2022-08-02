#include <iostream>
#include <string>
int main()
{
	bool great,less,eq,noeq ;
	int x{} ,y{} ;
	std::cout << "Input 2 numbers and we will compare the 2 " << std::endl ;
	std::cout << "Input x ";
	std::cin >> x ;
	std::cout << "Input y "  ;
	std::cin >> y ;
	great = x>y ;
	less=x<y;
	eq=x==y;
	noeq=x!=y;
	std::cout << "Is x greater than y?" << std::endl ;
	std::cout <<  great << std::endl ;
	std::cout << "If the printed number is 1 then true ,if not ,then false " << std::endl ;
	
	std::cout << "Is x lesser than y?" << std::endl ;
	std::cout <<  less << std::endl ;
	std::cout << "If the printed number is 1 then true ,if not ,then false " << std::endl;
	
	std::cout << "Is x equal to y?" << std::endl ;
	std::cout <<  eq << std::endl ;
	std::cout << "If the printed number is 1 then true ,if not ,then false " << std::endl;

	std::cout << "Is x not equal to y?" << std::endl ;
	std::cout <<  noeq << std::endl ;
	std::cout << "If the printed number is 1 then true ,if not ,then false " << std::endl;
}
