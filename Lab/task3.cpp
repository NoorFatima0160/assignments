#include <iostream>
using namespace std;
void displayDetail(string name,int marks;char section,float aggrecate);
main(){

int marks;
string name;
char section;
float aggrecate;
cout<<" enter your name :";
cin>>name;
cout<<"enter your marks :";
cin>>marks;
cout<<"enter your section :";
cin>>section;
cout<<"enter your aggrecate :";
cin>>aggrecate;
displayDetail
(name,marks,section,aggrecate);

}

void displayDetail(string name,int markschar section,float aggrecate){
   cout<<"your name is :"<<name<<endl;
   cout <<"your marks are:"<<marks<<endl; 
   cout <<"Your section is :"<<section<<endl;
   cout<<"Your aggrecate is :"<<aggrecate;
}