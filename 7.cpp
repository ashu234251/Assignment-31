/*
7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.
*/
#include<iostream>
#include<string>
using namespace std;
class Employee
{
      int emp_code;
      string emp_name;
    public:
      void setEmpCode()
      {
        cout<<"Enter Employee Code: ";
        cin>>emp_code;
        fflush(stdin);
      }
      int getEmpCode()
      {
        return emp_code;
      }
      void setEmpName()
      {
        cout<<"Enter Employee Name: ";
        getline(cin,emp_name);
      }
      string getEmpName()
      {
        return emp_name;
      }
};
class FullTime:public Employee
{
      float daliy_rate;
      float salary;
      int num_of_days;
    public:
      void setDailyRate()
      {
        cout<<"Enter Daily Rate: ";
        cin>>daliy_rate;
      }
      void setNumOfDays()
      {
        cout<<"Enter Number of Days: ";
        cin>>num_of_days;
      }
      void addEmployee()
      {
        setEmpCode();
        setEmpName();
        setNumOfDays();
        setDailyRate();
        cout<<"Employee Added Successfully."<<endl<<endl<<endl;
      }
      void displayRecord()
      {
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"Employee Number       :  "<<getEmpCode()<<endl;
        cout<<"Employee Name         :  "<<getEmpName()<<endl;
        cout<<"Salary                :  "<<(num_of_days*daliy_rate)<<endl;
        cout<<"Status                :  Fulltime"<<endl;
        cout<<"---------------------------------------------------------"<<endl<<endl;
      }
};
class PartTime:public Employee
{
      float hourly_rate;
      float salary;
      int num_of_hours;
      string status;
    public:
      void setHourlyRate()
      {
        cout<<"Enter Hourly Rate: ";
        cin>>hourly_rate;
      }
      void setNumOfHours()
      {
        cout<<"Enter Number of Hours: ";
        cin>>num_of_hours;;
      }
      void addEmployee()
      {
        setEmpCode();
        setEmpName();
        setNumOfHours();
        setHourlyRate();
        cout<<"Employee Added Successfully."<<endl<<endl<<endl;
      }
      void displayRecord()
      {
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"Employee Number       :  "<<getEmpCode()<<endl;
        cout<<"Employee Name         :  "<<getEmpName()<<endl;
        cout<<"Salary                :  "<<(num_of_hours*hourly_rate)<<endl;
        cout<<"Status                :  Parttime"<<endl;
        cout<<"---------------------------------------------------------"<<endl<<endl;
      }
};
int main()
{
   int x=0,y=0;
   FullTime f[10];
   PartTime p[10];
   int choice;
   while(1)
   {
     cout<<"1.Enter Record."<<endl;
     cout<<"2.Display Record."<<endl;
     cout<<"3.Search Record."<<endl;
     cout<<"4.Quit"<<endl<<endl;

     cout<<"Enter your Choice: ";
     cin>>choice;

     switch(choice)
     {
        case 1:
           int option;
           cout<<"1.Full-Time Employee"<<endl;
           cout<<"2.Part-Time Employee"<<endl<<endl;

           cout<<"Enter Your Choice: ";
           cin>>option;
           switch(option)
           {
            case 1 :
            {
               f[x].addEmployee();
               x++;
               break;
            }
            case 2 :
            {
               p[y].addEmployee();
               y++;
               break;
            }
           }
           break;

        case 2:
           for(int i=0;i<x;i++)
           {
            f[i].displayRecord();
           }
           for(int j=0;j<y;j++)
           {
            p[j].displayRecord();
           }
          break;

        case 3:
          int id,i,j;
          cout<<"Enter Employee Id: ";
          cin>>id;
          for(i=0;i<x;i++)
          {
            if(f[i].getEmpCode()==id)
               {
                cout<<"Employee Found"<<endl;
                f[i].displayRecord();
                break;
               }
          }
          for(j=0;j<y;j++)
          {
            if(p[j].getEmpCode()==id)
            {
               cout<<"Employee Found"<<endl;
               p[j].displayRecord();
               break;
            }
          }
          if(i==x && j==y)
            cout<<"Employee Not Found."<<endl<<endl;
          break;

        case 4:
              exit(0);
        default:
              exit(0);
           
     }
   }
}