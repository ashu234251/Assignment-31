/*
8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.
*/
#include<iostream>
using namespace std;
class Customer
{
      string name;
      long long int mobile_number;
    public:
      void setName()
      {
        cout<<"Enter Customer Name: ";
        getline(cin,name);
      }
      void setMobile()
      {
        cout<<"Enter Customer Mobile Number: ";
        cin>>mobile_number;
      }
};
class Depositor:public Customer
{
      long long int account_no;
      float balance;
    public:
      void setAccountNo()
      {
        cout<<"Enter Account Number: ";
        cin>>account_no;
      }
      void setBalance()
      {
        cout<<"Enter Balance: ";
        cin>>balance;
      }
};
class Borrower:public Depositor
{
      int loan_no;
      float loan_amount;
    
}