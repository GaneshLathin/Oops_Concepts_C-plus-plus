// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Remote
{
   public :
   virtual void RemoteFunction()=0;
};

class LgTv : public Remote
{
    public :
    void RemoteFunction() override
    {
        cout<<"Turn on Remote Internally";
    }
};
int main()
{
    Remote *r=new LgTv();
    r->RemoteFunction();
    
}