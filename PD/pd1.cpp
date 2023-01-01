#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main(){
system("cls");
gotoxy(15,15);
cout<<"My name is Noor Fatima";
gotoxy(1,20);


}



void gotoxy(int x,int y){
  COORD coordinate;
  coordinate.X=x;
  coordinate.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
}
