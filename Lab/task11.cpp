#include <iostream>
using namespace std;
void calculatebill(string day,int amount);
main()
{
 int amount;
 string day;
  cout<<"enter total amount :";
 cin>>amount;
 cout<<"enter day :";
 cin>>day;

 calculatebill(day,amount);
}


void calculatebill(string day,int amount)
{
 float percent=amount * 10/100;
 float bill = amount-percent;
 float percentage=amount* 5/100;
 float billing= amount-percentage;
 if(day=="sunday")
  {
   cout<<"your bill is :"<<bill;
  }
 if(day != "sunday")
  {
  cout<<"your bill is :"<<billing;
  }
}