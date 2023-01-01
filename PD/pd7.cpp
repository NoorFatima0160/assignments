

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
  int y=4;
 
 while(true){
  move(x,y);
  if(y<10){
  y=y+1;
  
  }
 if(y==10){
  gotoxy(5,9);
  cout<<" ";
  y=4;
   }

}

 
  
  gotoxy(12,12);
}



void gotoxy(int x,int y){
  COORD coordinate;
  coordinate.X=x;
  coordinate.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);}





void move(int x, int y){

    gotoxy(x,y-1);
    cout<<" ";
    gotoxy(x,y);
    cout<<"P";
    Sleep(500);
    

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