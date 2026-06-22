// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Enginee
{
    public :
    void start()
    {
        cout<<"Enginee Starts.....\nCar Running"<<endl;
    }
};
class Car
{
    public :
       Enginee e;
    void drive()
    {
        cout<<"Starting driving...."<<endl;
        e.start();
    }
};
int main()
{
  Car c;
  c.drive();
}