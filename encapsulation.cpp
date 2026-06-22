// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Car
{
   private :
   string color;
   double speed;
   
   public :
   Car(string color,double speed)
   {
       this->color=color;
       this->speed=speed;
   }
   
   double getSpeed()
   {
       return speed;
   }
   string getColor()
   {
       return color;
   }
};
int main()
{
    Car d("Blue",123.00);
    cout<<d.getSpeed()<<" "<<d.getColor();
    
}