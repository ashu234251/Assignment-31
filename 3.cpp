/*
3. Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.
*/
#include<iostream>
using namespace std;
class base
{
      int m1,m2,m3;
    public:
      void setMarks()
      {
        cout<<"Enter Physics Marks: ";
        cin>>m1;
        cout<<"Enter Chemistry Marks: ";
        cin>>m2;
        cout<<"Enter Maths Marks: ";
        cin>>m3;
      }
      int getPhysics()
      {
        return m1;
      }
      int getChemistry()
      {
        return m2;
      }
      int getMaths()
      {
        return m3;
      }
};
class derived1:public base
{ 
    public:
      void displayTotalMarks()
      {
        cout<<"Total Marks Obtained: "<<getPhysics()+getChemistry()+getMaths()<<endl;
      }
      int getTotalMarks()
      {
        return getPhysics()+getChemistry()+getMaths();
      }
};
class derived2:public derived1
{
    public:
      int getPercentage()
      {
        return getTotalMarks()/3.0;
      }
      void displayPercentage()
      {
        cout<<"Percentage Obtained are: "<<getTotalMarks()/3.0<<endl;
      }
};
int main()
{
    derived2 d;
    d.setMarks();

    d.displayTotalMarks();
    d.displayPercentage();

    return 0;
}
