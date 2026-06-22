#include<bits/stdc++.h>
using namespace std;

class Math
{
protected:
    int x;

public:
    Math(int x)
    {
        this->x = x;
    }

    friend void show(Math m);
};

class Cal : public Math
{
public:
    Cal(int x): Math(x) {}

    void display()
    {
        cout<<"The value of x : "<<x<<endl;
    }
};

void show(Math m)
{
    cout<<"The value of x accessed outside: "<<m.x<<endl;
}

int main()
{
    Cal c(10);
    c.display();
    show(c);  
}