#include <iostream>

using namespace std;
void discount(float amount);
main(){
int red;
int tulip;
int whiterose;
float amount;

float price_red=2.0;
float price_tulip=4.10;
float price_white=2.50;
  cout <<"enter number of red roses :";
  cin>>red;
  cout <<"enter number of tulip roses :";
  cin>>tulip;
  cout <<"enter number of white roses :";
  cin>>whiterose;

  price_red= price_red * red;
  price_tulip= price_tulip *tulip;
  price_white= price_white * whiterose;

   amount = price_red + price_tulip + price_white;
   cout<<"original price :"<<amount<<endl;
  
    if(amount>200){
     discount(amount);
}

}

void discount(float amount){
   float disc;
   float  tamount;
   disc =amount * 20/100;
   tamount = amount - disc;
cout<<" amount after discount : "<<tamount;
}