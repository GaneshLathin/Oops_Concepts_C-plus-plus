// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Operator
{
    public :
    int x;
    Operator(int x)
    {
        this->x=x;
    }
    
    Operator operator +(Operator c)
    {
        return Operator(x+c.x);
    }
    
};
int main()
{
    
   Operator a(10),b(20);
   Operator c=a+b;
   cout<<c.x;
}