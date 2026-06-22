// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream of("Sample.txt");
    of<<"Hello Sowmiya K!!!"<<endl;
    of<<"I am Ganesh S"<<endl;
    of.close();
    
    ifstream ifs("Sample.txt");
    string d="";
    while(getline(ifs,d))
    {
        cout<<d<<endl;
    }
   
}