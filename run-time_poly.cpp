// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Animal
{
    public :
   virtual void sound()
   {
       cout<<"Animal sound"<<endl;
   }
   
};
class Dog : public Animal
{
    public :
    void sound()
    {
        cout<<"Dog Barks"<<endl;
    }
};

int main()
{
   Animal* d=new Dog();
   d->sound();
    
}