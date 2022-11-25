/*
9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.
*/
#include<iostream>
using namespace std;
class Student
{
      int roll_no;
      string name;
    public:
      void setRollNo()
      {
        cout<<"Enter Student Roll Number: ";
        cin>>roll_no;
        fflush(stdin);
      }
      void setName()
      {
        cout<<"Enter Student Name: ";
        getline(cin,name);
      }
      void display_Student()
      {
        cout<<"Roll Number             : "<<roll_no<<endl;
        cout<<"Student Name            : "<<name<<endl<<endl;
      }
};
class StudentExam:public Student
{
      float m1,m2,m3,m4,m5,m6;
      float percentage;
    public:
      void setMarks()
      {
        cout<<"Enter Marks for Subject 1: ";
        cin>>m1;
        cout<<"Enter Marks for Subject 2: ";
        cin>>m2;
        cout<<"Enter Marks for Subject 3: ";
        cin>>m3;
        cout<<"Enter Marks for Subject 4: ";
        cin>>m4;
        cout<<"Enter Marks for Subject 5: ";
        cin>>m5;
        cout<<"Enter Marks for Subject 6: ";
        cin>>m6;
      }
      void displayMarks()
      {
        cout<<"Marks of Subject 1      : "<<m1<<endl;
        cout<<"Marks of Subject 2      : "<<m2<<endl;
        cout<<"Marks of Subject 3      : "<<m3<<endl;
        cout<<"Marks of Subject 4      : "<<m4<<endl;
        cout<<"Marks of Subject 5      : "<<m5<<endl;
        cout<<"Marks of Subject 6      : "<<m6<<endl<<endl;
      }
      void displayPercentage()
      {
        cout<<"Total Percentage        : "<<(m1+m2+m3+m4+m5+m6)/6<<endl;
      }  
};
int main()
{
    StudentExam s[10];
    int n;
    cout<<"Enter Number of Students you want to Enter: ";
    cin>>n;
    cout<<endl<<endl;

    for(int i=0;i<n;i++)
    {
       s[i].setRollNo();
       s[i].setName();
       s[i].setMarks();
       cout<<"Student Added Successfully."<<endl<<endl;
    }
    cout<<"-----------------------------------------------"<<endl;
    cout<<"****************Student Marklist***************"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        s[i].display_Student();
        s[i].displayMarks();
        s[i].displayPercentage();
        cout<<"---------------------------------------------"<<endl<<endl;
    }
    return 0;
}