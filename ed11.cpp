#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
bool check(int arr[3][3])
{
    bool s=true ;
    vector<int>all;    
    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j< 3; j++)
        {
            all.push_back(arr[i][j]);
        }      
    }
    std::sort(all.begin(),all.end());
    for (int k = 0; k < all.size(); k++)
    {
        if((all[k]==all[k+1])||(all[k]<1||all[k]>9))
        s=false;
    }
    return s;
    
    
}
int main ()
{
int arr [3][3]={{7,3,2},{9,7,8},{4,5,6}};
cout <<"you are only alloweed to use a number once ,if repeated then the submission will not be considered "<<endl;
cout<<check(arr);

}