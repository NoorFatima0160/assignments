#include <iostream>
using namespace std;
void maximium(int number1,int number2);
void minimum(int number1,int number2);
void isequal(int number1,int number2);
main() 
{
while(true)
 {
   int num1;
   int num2;
   int choice;
   cout<<"enter first number :";
   cin>>num1;
   cout<<"enter second number :";
   cin>>num2;
   cout<<"enter choice between 1 and 3";
   cin>>choice;
    if(choice==1)
      {
         maximium(num1,num2);
      }
   if(choice==2)
    {
     minimum(num1,num2);
    }
    if(choice==3)
    {
     minimum(num1,num2);
    }
 }
}

void maximium(int number1,int number2)
{ 
 if(number1>number2)
  {
   cout<<" First number is greater" <<endl;
  }
 if(number1<number2)
  {
   cout<<" Second number is greater"<<endl;
  }
}

void minimum(int number1,int number2)
 { 
 if(number1>number2)
  {
   cout<<" second number is minimum" <<endl;
  }
 if(number1<number2)
  {
   cout<<" first number is minimum"<<endl;
  }
}

void isequal(int number1,int number2)
{
  if(number1==number2)
   {
   cout<<"number are equal";
   }
}

