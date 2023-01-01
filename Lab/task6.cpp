#include <iostream>
using namespace std;
void iseligible(int age);
main(){
while(true){
int age;
cout<<"enter your age";
cin>>age;
iseligible(age);}

}
 void iseligible(int age){
 if (age>=18){
  cout<<"you are eligible for vote";
 }
 if (age<18){
  cout<<"you are not eligible for vote"<<endl;
 }

}
