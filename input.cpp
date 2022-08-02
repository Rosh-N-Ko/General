#include <iostream>
#include <string>
int main()
{
std::string name ;
std::cout<< ("Input your full name") ;
std::getline(std::cin , name ) ;
std::cout << ("This is your name") << std::endl ;
std::cout << name ;
return 0;
}