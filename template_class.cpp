// You are using GCC
#include<bits/stdc++.h>
using namespace std;
template<typename t>
class temp
{
    public :
    t a, b;
    
    temp(t a,t b)
    {
        this->a=a;
        this->b=b;
    }
    t larger()
    {
        if(a>b)
        return a;
        return b;
    }
    
};
int main()
{
   temp s(10,20);
   cout<<s.larger();
}