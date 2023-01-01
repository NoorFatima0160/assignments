#include <iostream>
using namespace std;
void add(int number1, int number2);
void multiply(int number1,int number2);
void divide(int number1,int number2);
void subtract(int number1,int number2);

main(){
while(true){
int num1;
int num2;
char symbol;
cout<<"enter first number ";
cin>>num1;
cout <<"enter second number ";
cin>>num2;
cout<<"enter symbol:";
cin>>symbol;
if(symbol=='+'){
add(num1,num2);}
if(symbol=='*'){
multiply(num1,num2);}
if(symbol=='/'){
divide(num1,num2);}
if(symbol=='-'){
subtract(num1,num2);}
}



}

void add(int number1, int number2){
int sum=number1+number2;
cout<<"sum is :"<<sum;
}
void multiply(int number1, int number2){
cout<<"product is :"<<number1*number2;
}
void divide(int number1, int number2){
cout<<"answer is :"<<number1/number2;
}
void subtract(int number1, int number2){
cout<<"answer is :"<<number1-number2;
}
