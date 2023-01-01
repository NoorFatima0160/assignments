#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void structure();
void move(int x,int y);
main(){
system("cls");
structure();
int x=5;
int y=5;

move(x,y);
gotoxy(12,12);
}










void gotoxy(int x,int y){
  COORD coordinate;
  coordinate.X=x;
  coordinate.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);}


void move(int x, int y){

    gotoxy(x-1,y);
    cout<<" ";
    gotoxy(x,y);
    cout<<"P";

}
void structure(){
cout<<"***********************************"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"***********************************"<<endl;

}

