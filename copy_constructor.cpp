// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Copy
{
    public :
    int x;
    Copy(int x)
    {
        this->x=x;
    }
    Copy(const Copy &a)
    {
        x=a.x;
    }
};
int main()
{
   Copy c(10);
   Copy d=c;
   cout<<d.x;
}