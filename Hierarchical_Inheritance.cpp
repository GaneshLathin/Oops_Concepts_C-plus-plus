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
class Child1 : public Father
{
    public :
    void display2()
    {
        cout<<"I am Ganesh"<<endl;
    }
};
class Child2 : public Father
{
    public :
    void display3()
    {
        cout<<"I am Priya"<<endl;
    }
};

int main()
{
    
   Child1 c1;
   Child2 c2;
   c1.display1();
   c1.display2();
   c2.display1();
   c2.display3();
    
}