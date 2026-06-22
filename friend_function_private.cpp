// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Math
{
    private :
    int x;
    
    public :
    Math(int x)
    {
        this->x=x;
    }
    
    friend void show(Math m);
};
void show(Math m)
{
    cout<<"The value of x : "<<m.x<<endl;
}
int main()
{
    
   Math m(10);
   show(m);
}