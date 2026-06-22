// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Father
{
    public :
   void display1()
   {
       cout<<"I am Father"<<endl;
   }
   
};
class Mother
{
    public :
   void display2()
   {
       cout<<"I am Moter"<<endl;
   }
    
};
class Child : public Father,public Mother
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