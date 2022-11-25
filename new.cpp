#include <iostream>
#include <string>
using std::cout ;
using std::cin;
using std::endl;
using std::string;

string toSnake(string ca)
{
    string neww="";
    for (auto c:ca)
    {
        if(isupper(c))
            neww.push_back('_');
    
        neww.push_back(std::tolower(c));
        
    }
return neww;
}
string toCamel(string sn)
{
    string neww;
    for (int i = 0; i < sn.length(); i++){
        if (i != 0 && sn[i-1] == '_')
            neww.push_back(std::toupper(sn[i]));
        else if (std::islower(sn[i]))
            neww.push_back(sn[i]);
    }
    return neww;   
}
int main ()
{
    string sn="egg_man";
    string ca="camelManCool";
    cout<<sn<<"is now "<<toCamel(sn)<<endl;
    cout<<ca<<" is now "<<toSnake(ca)<<endl;
}