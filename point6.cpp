#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
int r,c;
cout<<"Enter rows:"<<endl;
cin>>r;
cout<<"Enter coloumns:"<<endl;
cin>>c;
int ** table= new int*[r];//pointer(table ) to the pointer(rows) to the array of coloumns(for loop)
for (int i = 0; i < r; ++i)//allocate dynamic memory 
{
	table[i]=new int[c];
}

for (int i = 0; i < count; ++i)//delete dynamic memory
{
	delete[] table[i];
}
delete table[];
table=NULL;
}



