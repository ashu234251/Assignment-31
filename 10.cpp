/*
10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.
*/
#include<iostream>
using namespace std;
class Worker
{
      int code;
      char name[35];
      float salary,ta;
    public:
      void setCode()
      { 
        cout<<"Enter Code         : ";
        cin>>code;
        fflush(stdin);
      }
      void setName()
      {
        cout<<"Enter Name         : ";
        gets(name);
      }
      void setSalary()
      {
        cout<<"Enter Salary       : ";
        cin>>salary;
      }
      int getCode()
      {
        return code;
      }
      char* getName()
      {
        return name;
      }
      float getSalary()
      {
        return salary;
      }
      float getTA()
      {
        return salary/10;
      }

};
class Officer
{
      float da,hra;
    public:
      void setDA_HRA()
      {
        cout<<"Enter DA           : ";
        cin>>da;
        cout<<"Enter HRA          : ";
        cin>>hra;
      }
      float getDA()
      {
        return da;
      }
      float getHRA()
      {
        return hra;
      }
};
class Manager:public Worker,public Officer
{
      float ta,gross_salary;
    public:
      void addManager()
      {
        cout<<"--------------------------------"<<endl;
        setCode();
        setName();
        setDA_HRA();
        setSalary();
        cout<<"--------------------------------"<<endl;
      }
      void displayManager()
      {
        cout<<"Code               : "<<getCode()<<endl;
        cout<<"Name               : "<<getName()<<endl;
        cout<<"Salary             : "<<getSalary()<<endl;
        cout<<"DA                 : "<<getDA()<<endl;
        cout<<"HRA                : "<<getHRA()<<endl;
        cout<<"TA                 : "<<getTA()<<endl;
        cout<<"Gross Salary       : "<<getSalary()+getDA()+getHRA()+getTA()<<endl;
        cout<<"--------------------------------"<<endl;
      }
};
int main()
{
    Manager m[10];
    int n;
    cout<<"Enter Manager Count: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Manager Information for "<<i+1<<endl;
        m[i].addManager();
    }
    cout<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Manager Information"<<endl;
    cout<<"----------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        m[i].displayManager();
    }

    return 0;
}