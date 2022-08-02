#include <iostream> 
#include <string> 
int main()
{
int num1 , num2 , sum ;
std::string Name;
std::cout << "Enter your name: ";
std::getline ( std::cin , Name );
std::cout << ("Enter the first number : ");
std::cin >> ( num1 ) ;
std::cin.clear();
std::cin.ignore(1000 , '\n');
std::cout << ("Enter the second number : ");
std::cin >> ( num2 ) ;
sum = num1 + num2 ;
std::cout << "Your name is " << Name << std::endl ;
std::cout << "The numbers you wanted to add were" << num1 << " and " << num2 << std::endl ;
std::cout << "And their sum is " << sum ;
return 0;
}
