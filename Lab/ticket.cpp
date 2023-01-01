#include <iostream>
using namespace std; 
main(){
string movie_name;
int adult_ticket;
int child_ticket;
float adult_sold;
float child_sold;
float dona;
float amount;
float donation;
cout<<"enter movie name :";
cin>>movie_name;
cout<<"enter adult ticket price :";
cin>>adult_ticket;
cout<<"enter child ticket price :";
cin>>child_ticket;
cout<<"enter number of adult ticket sold :";
cin>>adult_sold;
cout<<"enter number of child ticket sold :";
cin>>child_sold;
cout<<"enter percentage to donate :";
cin>>dona;
amount= (adult_ticket*adult_sold)+ (child_ticket*child_sold);
donation= amount - (amount * dona/100);
cout<<"total amount :"<<amount<<endl;
cout<<"amount after donation :"<<donation;
}