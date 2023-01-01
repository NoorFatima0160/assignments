#include <iostream>

using namespace std;
main(){
int holidays,workDays,playtime,remainingMin,remTime;
int hours,minute;
  cout<<"enter holidays :";
  cin>>holidays;
  workDays= 365-holidays;
  playtime=workDays*63+ holidays*127;
  remainingMin=-(30000-playtime);
  remTime=(30000-playtime);

 if(playtime <30000)
  {
   hours=remTime/60;
   minute= hours%60;
  cout<<"tom  can sleep well "<<endl;
  cout<<"tom can sleep "<<remTime<<" minutes"<<endl;
  cout<<"tom can sleep "<<hours<<" hours"<<endl;
  }

 if(playtime >=30000)
  {
   hours=remTime/60;
   minute= hours%60;
  cout<<"tom  will run away "<<endl;
  cout<<"tom can sleep "<<remTime<<" minutes"<<endl;
  cout<<"tom can sleep "<<hours<<" hours"<<endl;
  }
  }