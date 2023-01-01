#include <iostream>

using namespace std;
void discount(float price,string country);
main(){
float price;
string country;
cout<<"enter price of ticket :";
cin>>price;
cout<<"enter country in small letters :";
cin>>country;

discount(price,country);




}
void discount(float price,string country){
    if(country=="pakistan"){
          float val=  price * 5/100;
             price = price-val;
       cout<<"total amount is : "<<price;}
       
    if(country=="iarland"){
          float val=  price * 10/100;
             price = price-val;
       cout<<"total amount is : "<<price;}
   
    if(country=="india"){
          float val=  price * 20/100;
             price = price-val;
       cout<<"total amount is : "<<price;}
  
    if(country=="england"){
          float val=  price * 30/100;
             price = price-val;
       cout<<"total amount is : "<<price;}
   
    if(country=="canada"){
          float val=  price * 45/100;
             price = price-val;
       cout<<"total amount is : "<<price;}

}



   




