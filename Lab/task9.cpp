#include <iostream>
using namespace std;
void checknumber(int number);
main(){
while(true) 
 {
  int number;
  cout<<"enter a number :";
  cin>>number;
  checknumber(number);
 }
  
}



void checknumber(int number)
{ 
  if(number%2==0)
 {
    cout<<"number is even";
 }
  if(number%2==1)
 {
    cout<<"number is even";
 }
}
