/*
2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.
*/
#include<iostream>
#include<string>
using namespace std;

class base
{

      int a,b;
    public:
    void setNumbers()
    {
        cout<<"Enter Two Numbers: "<<endl;
        cin>>a>>b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"Sum of the Numbers is: "<<getA()+getB()<<endl;
    }
};
int main()
{
    derived d1;
    d1.setNumbers();
    d1.display();

    return 0;

}