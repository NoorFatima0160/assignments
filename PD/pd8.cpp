#include <iostream>

using namespace std;
void checknumber(int num1,int num2);
main(){
int num1;
int num2;
cout<<"enter first number: ";
cin>>num1;
cout<<"enter second number: ";
cin>>num2;
checknumber(num1,num2);
}


void checknumber(int num1,int num2){
  if(num1==num2){
     cout<<"numbers are equal";}
 if(num1!=num2){
     cout<<"numbers are not equal";}
}