#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
bool rep(int arr[],int len,int siz)
{
    if(len>=siz)return true ;
    for (int i =0;i<siz -len;i++)   
    {
        if (arr[i+len]!= arr[i]);
        return false ;
    } 
    return true ;
}
int main ()
{
    int arr1[6]={1,2,3,1,2,3};
    int arr2[9]={1,2,3,1,2,3};
    cout<<rep(arr1,3,6)<<endl;
    cout<<rep(arr2,3,9);

}