#include <iostream>
#include <cstdlib>
using namespace std;
int merchant(int &souls, int &hp, int &atk, int &lv, int &mp, int &combustion){
  cout<<"Welcome to the Withcer Shop."<<endl;
  cout<<"What do you want to improve?"<<endl;
  cout<<"Your level:"<<lv<<" "<<"Your hp:"<<hp<<" "<<"Your atk:"<<atk<<endl;
  char cont;
  cont='Y';
  while(cont=='Y'){
    cout<<"The amount of souls you have:$"<<souls<<endl;
    cout<<"armor:$2, spells:$4, combustion(a power):$20"<<endl;
    cout<<"Please enter what you want to improve/learn:";
    string item;
    cin>>item;
    cout<<endl;
    if(item=="armor"){
      if(souls>=2){
        hp+=3;
        souls-=2;
        lv++;
        mp++;
        cout<<"Your hp has increased"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough souls"<<endl;
    }
    else if(item=="spells"){
      if(souls>=4){
        atk+=2;
        souls-=4;
        lv++;
        mp++;
        cout<<"Your atk has increased."<<endl;
      }
      else
      cout<<"Sorry, you don't have enough souls."<<endl;
    }
    else if(item=="combustion"){
      if(combustion==0){
        if(souls>=20){
          combustion=1;
          souls-=20;
          lv++;
          mp++;
          cout<<"You can now use combustion in battle."<<endl;
        }
        else
        cout<<"Sorry, you don't have enough souls."<<endl;
      }
      else
      cout<<"You have already learnt combustion."<<endl;
    }
    else
    cout<<"This ability doesn't exist."<<endl;
    cout<<"Your level:"<<lv<<" "<<"Your hp:"<<hp<<" "<<"Your atk:"<<atk<<endl;
    cout<<"Is there anything you still want to improve? (Y/N)";
    cin>>cont;
    cout<<endl;
  }
  cout<<"Have a nice day."<<endl;
  return 0;
}

int battle(int &souls, int hp, int atk, int lv, int flasks, int mp, int combustion){
  int dungeon,tem;
  char explore='Y';
  while(explore=='Y'){
    tem=hp;
    cout<<"please enter a random number of the dungeon that you want to explore:";
    cin>>dungeon;
    cout<<endl;
    while(tem>0){
      srand(dungeon);

    }

    cout<<"Continue on exploring? (Y/N)";
    cin>>explore;
    cout<<endl;
  }
  return 0;
}

int main(){
  int souls,hp,atk,lv,flasks,mp,fireball,combustion;
  hp=5;
  atk=1;
  souls=10;
  lv=1;
  flasks=3;
  mp=2;
  combustion=0;
  merchant(souls,hp,atk,lv,mp,combustion);
  battle(souls, hp, atk, lv, flasks,mp,combustion);
  return 0;
}
