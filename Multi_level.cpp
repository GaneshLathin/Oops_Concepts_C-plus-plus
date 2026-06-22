// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class GrandFather
{
    public :
   void display1()
   {
       cout<<"I am GrandFather"<<endl;
   }
    
};
class Father : public GrandFather
{
    public :
   void display2()
   {
       cout<<"I am Father"<<endl;
   }
   
};
class Child : public Father
{
    public :
    void display3()
    {
        cout<<"I am Ganesh"<<endl;
    }
};

int main()
{
    
   Child c;
   c.display1();
   c.display2();
   c.display3();
    
}