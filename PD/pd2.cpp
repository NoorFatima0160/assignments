#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void structure();
main(){
system("cls");
structure();


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

void gotoxy(int x,int y){
  COORD coordinate;
  coordinate.X=x;
  coordinate.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
  }
