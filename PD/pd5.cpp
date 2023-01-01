 #include <iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
main(){
  system("cls");

  gotoxy(55,15);
 cout<<"   %    %    %%      %%    %%%%     "<<endl;
gotoxy(55,16);
 cout<<"   % %  %  %    %  %    %  %   %    "<<endl;
gotoxy(55,17);
 cout<<"   %  % %  %    %  %    %  %%%      "<<endl;
gotoxy(55,18);
 cout<<"   %    %    %%      %%    %  %     "<<endl; 


}


void gotoxy(int x,int y){
  COORD coordinate;
  coordinate.X=x;
  coordinate.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);}



