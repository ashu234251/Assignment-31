/*
Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method).
*/
#include<iostream>
using namespace std;
class B;                  // As we are using Class B before defining, so we need to declare it.
class A
{
      int a;
    public:
      void setA()
      {
        cout<<"Enter Value of a: ";
        cin>>a;
      }
      int getA()
      {
        return a;
      }
      friend void Average(A *,B *);              // Friend Function Declaration.
};
class B
{
      int b;
    public:
      void setB()
      {
        cout<<"Enter Value of b: ";
        cin>>b;
      }
      int getB()
      {
        return b;
      }
      friend void Average(A *,B *);             // Friend Function Declaration.
};

void Average(A *s,B *t)                         // Defining Friend function using call by reference method.
{
    cout<<"Average Value is: "<<(s->getA()+t->getB())/2;
}
int main()
{
  A first;
  B second;
  first.setA();
  second.setB();
  Average(&first,&second);                      // Passing Address of 2 objects.

  return 0;
}