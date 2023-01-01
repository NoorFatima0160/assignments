#include <iostream>

using namespace std;
void checknumber(string value);
main(){
string value;
cout<<"enter true or false value: ";
cin>>value;

checknumber(value);
}


void checknumber(string value)
{
  if(value=="true"){
     cout<<"False";
}
 if(value!="true"){
     cout<<"True";
}

}