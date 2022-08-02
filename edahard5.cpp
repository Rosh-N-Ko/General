#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

bool isValidHexCode(std::string str) {
  if (str[0] != '#') {return false;}
  if (str.size() != 7) {return false;}
  for (int i{1}; i < 7; ++i)
  {
    if (str[i] < 48 || str[i] > 57) // check for 0 - 9
    {
      if (str[i] < 65 || str[i] > 70) // check for A - F
      {
        if (str[i] < 97 || str[i] > 102) // check for a - f
        {return false;} // return false if character does not match any of these ranges
      }
    }
  }
  return true;
}

int main()
{
	string s;
	cout<<"Enter Valid hex code"<<endl;
	cin>>s;
    cout<<isValidHexCode(s);
}
