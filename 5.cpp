/*
Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.
*/

#include<iostream>
using namespace std;
class Item
{
      int item_no;
      string item_name;
      int item_price;
    public:
      void setItem_No()
      {
        cout<<"Enter Item Number: ";
        cin>>item_no;
        fflush(stdin);
      }
      int getItemNo()
      {
        return item_no;
      }

      void setItemName()
      {
        cout<<"Enter Item Name: ";
        getline(cin,item_name);
        fflush(stdin);
      }
      string getItemName()
      {
        return item_name;
      }

      void setItemPrice()
      {
        cout<<"Enter Item Price (MRP): ";
        cin>>item_price;
        fflush(stdin);
      }
      int getItemPrice()
      {
        return item_price;
      }
};
class Discounted_Item:public Item
{
      float discount_percent;
    public:
      void setDiscountPercent()
      {
        cout<<"Enter Discount Percent: ";
        cin>>discount_percent;
      }
      float getDiscountPercent()
      {
        return discount_percent;
      }

      void setValues()
      {
        setItem_No();
        setItemName();
        setItemPrice();
        setDiscountPercent();
      }
      void display()
      {
        cout<<"Item Number : "<<getItemNo()<<endl;
        cout<<"Item Name : "<<getItemName()<<endl;
        cout<<"Item Price (MRP) : "<<getItemPrice()<<endl;
        cout<<"Discount % : "<<discount_percent<<endl;
        cout<<"Discounted Price : "<<getItemPrice()-(discount_percent*getItemPrice())/100<<endl;
        cout<<"------------------------------------"<<endl;
      }
      
};
int main()
{
    int n,i,price=0;
    float discount=0;
    float total_discounted_price=0;
    cout<<"Enter Number of Items: ";
    cin>>n;
    Discounted_Item I[100];
    for(i=0;i<n;i++)
    {
        cout<<"-------Enter Details of "<<i+1<<" Item-------"<<endl;
        I[i].setValues();
        price=price+I[i].getItemPrice();
        total_discounted_price=total_discounted_price + I[i].getItemPrice()-(I[i].getDiscountPercent()*I[i].getItemPrice())/100 ;
        cout<<endl;
    }
    cout<<endl;
    cout<<"---------------Item Details----------------"<<endl;
    for(i=0;i<n;i++)
    {
        I[i].display();
    }
    cout<<endl;
    cout<<"Total Price (MRP): "<<price<<endl;
    cout<<"Total Discount : "<<price-total_discounted_price<<endl;
    cout<<"Discounted Price: "<<total_discounted_price<<endl;
}