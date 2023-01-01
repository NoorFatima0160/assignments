#include <iostream>
using namespace std;
void result(int marks);

main(){
int marks;
cout <<" enter your marks :";
cin >>marks;
 result(marks); 

}

void result( int marks){
if (marks >= 50){
cout<<"you are pass";}
if (marks <50){
cout <<"you are fail";}
}