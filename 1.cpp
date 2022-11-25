/*
1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.
*/
#include<iostream>
#include<string>
using namespace std;
class Person
{
     string name;
     int age;
    public:
     void setName()
     {
        cout<<"Enter Name: ";
        getline(cin,name);
     }
     void setAge()
     {
        cout<<"Enter Age: ";
        cin>>age;
     }
     string getName()
     {
        return name;
     }
     int getAge()
     {
        return age;
     }
};
class Employee: public Person
{
     int Empid;
     float salary;
    public:
     void setEmpid()
     {
        cout<<"Enter Employee Id: ";
        cin>>Empid;
     }
     void setSalary()
     {
        cout<<"Enter Salary: ";
        cin>>salary;
     }
     int getEmpid()
     {
        return Empid;
     }
     float getSalary()
     {
        return salary;
     }
};

int main()
{
  Employee E1,E2;
  E1.setName();
  E1.setAge();
  E1.setEmpid();
  E1.setSalary();
  cout<<"Name of Employee is: "<<E1.getName()<<endl;
  cout<<"Age of Employee is: "<<E1.getAge()<<endl;
  cout<<"Employee Id is: "<<E1.getEmpid()<<endl;
  cout<<"Salary of Employee is: "<<E1.getSalary()<<endl;

  return 0;
}
