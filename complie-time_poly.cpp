// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class calculator
{
    public :
   void add(int a,int b)
   {
       cout<<a+b<<endl;
   }
   void add(int a,int b,int c)
   {
       cout<<a+b+c<<endl;
   }
};

int main()
{
    calculator c;
    c.add(10,20);
    c.add(10,20,30);
    
}