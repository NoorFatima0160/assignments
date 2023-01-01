#include <iostream>
using namespace std;
void display(string name,int marks);
main(){

int marks;
string name;
cout<<" enter your name :";
cin>>name;
cout<<"enter your marks :";
cin>>marks;
display(name,marks);

}

void display(string name,int marks){
cout<<"your name is :"<<name<<endl;
cout <<"your marks are:"<<marks<<endl; 
}