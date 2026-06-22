// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class LgTv
{
   private :
   void InternalImple()
   {
       cout<<"Internally turn on the Tv"<<endl;
   }
   
   public :
   void TurnOn()
   {
       cout<<"Turning on Tv"<<endl;
       InternalImple();
   }
};
int main()
{
    LgTv l;
    l.TurnOn();
    
}