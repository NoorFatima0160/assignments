#include <iostream>
using namespace std;
main(){
float initial_velocity;
float acceralation;
float time;
float final_velocity;
cout<<"enter initial velocity :";
cin>>initial_velocity;
cout<<"enter acceralation ;";
cin>>acceralation;
cout<<"enter time :";
cin>>time;
final_velocity= (acceralation*time)+initial_velocity;
cout<<"Final velocity us :"<<final_velocity;
}