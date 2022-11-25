/*
4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary
*/
#include<iostream>
#include<string>
using namespace std;
class Person
{
      string name;
      string address;
      string phone_number;
    public:
      void setName()
      {
        fflush(stdin);
        cout<<"Enter Name: ";
        getline(cin,name);
        fflush(stdin);
      }
      string getName()
      {
        return name;
      }

      void setAddress()
      {
        cout<<"Enter Address: ";
        getline(cin,address);
        fflush(stdin);
      }
      string getAddress()
      {
        return address;
      }

      void setPhoneNumber()
      {
        cout<<"Enter Mobile Number: ";
        cin>>phone_number;
        fflush(stdin);
      }
      string getPhoneNumber()
      {
        return phone_number;
      }
      
};
class Employee:public Person
{
      int eno;
    public:
    void setEmployeeId()
    {
        cout<<"Enter Employee Id: ";
        cin>>eno;
        fflush(stdin);
    }
    int getEmployeeId()
    {
        return eno;
    }
};
class Manager:public Employee
{
      string designation;
      string dept_name;
      int basic_salary;
    public:
      void setDesignation()
      {
        cout<<"Enter Employee Designation: ";
        getline(cin,designation);
        fflush(stdin);
      }
      void setDeptName()
      {
        cout<<"Enter Department Name: ";
        getline(cin,dept_name);
        fflush(stdin);
      }
      void setBasicSalary()
      {
        cout<<"Enter Basic Salary: ";
        cin>>basic_salary;
        fflush(stdin);
      }
      int getSalary()
      {
        return basic_salary;
      }

      void setManagerDetails()
      {
        setName();
        setAddress();
        setPhoneNumber();
        setEmployeeId();
        setDesignation();
        setDeptName();
        setBasicSalary();
      }
      void displayManager()
      {
        cout<<"Employee Id is: "<<getEmployeeId()<<endl;
        cout<<"Employee Name is: "<<getName()<<endl;
        cout<<"Employee Address is: "<<getAddress()<<endl;
        cout<<"Employee Phone Number is: "<<getPhoneNumber()<<endl;
        cout<<"Employee Designation is: "<<designation<<endl;
        cout<<"Employee Department Name is: "<<dept_name<<endl;
        cout<<"Employee Basic Salary is: "<<basic_salary<<endl;
      }

};
int main()
{
   int n,i;
   Manager m[100];
   cout<<"Enter Number of Managers: ";
   cin>>n;
   
   for(i=0;i<n;i++)
   {
    cout<<"Enter Details of "<<i+1<<" Manager "<<endl;
    cout<<"-----------------------------"<<endl;
    m[i].setManagerDetails();
    cout<<endl;
   }
   cout<<"\n--------------Employee Details-------------\n";
   for(i=0;i<n;i++)
   {
      cout<<i+1<<" Employee Details  "<<endl;
      m[i].displayManager();
      cout<<endl;
   }
   int temp=0;
   for(i=1;i<n;i++)
   {
     if(m[temp].getSalary() < m[i].getSalary())  
       temp=i;
   }
   cout<<"Highest Salaried Employee is "<<m[temp].getName()<<"  with Salary being "<<m[temp].getSalary()<<" per month."<<endl;

   return 0;

}