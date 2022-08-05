#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int (vector<int> prison) {
        if(prison.at(0) == 0) return 0;
        else{
            int freedNumber = 0;
            int i = 0;
            while (i < prison.size()){
                if(prison.at(i) == 1){
                    freedNumber++;
                    int j = i;
                    while (j < prison.size()){
                        if(prison.at(j) == 0) prison[j] = 1;
                        else prison[j] = 0;
                        j++;
                    }
                }
                i++;
            }
            return freedNumber;
        }
    }

int main ()
{
    int a ;
cout<<"Write the order of the cells "<<endl;
vector<int>fir;
for (int i = 0; i < 7; i++)
{
    cin>>a;
    fir.push_back(a);
    cout<<"  ";
}
cout<<"number of freed cells are  "<<cells(fir);



}