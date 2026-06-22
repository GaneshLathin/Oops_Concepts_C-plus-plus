// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Singleton
{
    private :
    static Singleton * instance;
    
    Singleton()
    {
        cout<<"Object created"<<endl;
    }
    
    public :
    static Singleton* getInstance()
    {
        if(instance==NULL)
        {
            instance = new Singleton();
        }
        return instance;
    }
};
Singleton* Singleton::instance=NULL;
int main()
{
   Singleton* obj1=Singleton::getInstance();
   Singleton* obj2=Singleton::getInstance();
   if(obj1==obj2)
   {
       cout<<"Object same"<<endl;
   }
   else
   {
       cout<<"Object are not same";
   }
}