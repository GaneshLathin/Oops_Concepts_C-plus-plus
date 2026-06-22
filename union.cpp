// You are using GCC
#include<bits/stdc++.h>
using namespace std;
union Student
{
    float marks;
    int age;
};
int main()
{
  Student s1;
  s1.marks=101.2;
  s1.age=20;
  cout<<s1.marks;
}