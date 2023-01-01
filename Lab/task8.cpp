#include <iostream>
using namespace std;
void name(string name);
main(){
string username;
while(true){
 cout<<"enter your name :";
 cin>>username;
 name(username);
 }
}
  void name(string name){
 cout<<"your name is :"<<name;
  }



