/* this program , is built o show countg and present the number of blocks of one in an array 
//Lessons- you can len to refer to the lasst element with len-1 
*/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int countones(int arr[],int len )
{
    int el=0,in {0};
    cout<<len<<endl;
    for (int a =0;a<len;a++)
    {
        if(arr[a]==1)
        {
            el+=1;
            if (((el>=2)&&(arr[a+1]==0))||((el>=2)&& a==len-1))
            {
                el=0;
                in+=1;
            }   
            else if ((el<2)&&(arr[a+1]=0))
            el=0;       
         }
    }
    return in;
}



int main ()
{
    int arr1[10]={1,0,0,1,1,0,1,1,1};
    int arr2[8]={1,1,1,1,0,0,0,0};
    cout<<"There are "<<countones(arr1,9)<<"blocks of 1's in array 1 "<<endl;
    cout<<"There are "<<countones(arr2,8)<<"blocks of 1's in array 2 "<<endl;
}