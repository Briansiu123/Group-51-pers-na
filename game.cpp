#include <iostream>
#include <cstdlib>
using namespace std;
int merchant(int &souls, int &hp, int &atk, int &lv, int &mp, int &combustion, int &firestorm){
  cout<<"Welcome to the Witcher House!"<<endl;
  cout<<"What do you want to improve?"<<endl;
  cout<<"Your level:"<<lv<<" "<<"Your hp:"<<hp<<" "<<"Your atk:"<<atk<<endl;
  char cont;
  cont='Y';
  while(cont=='Y'){
    cout<<"The amount of souls you have:@"<<souls<<endl;
    cout<<"armor:@2, strength:@4, combustion(a powerfull spell):@20, firestorm(the strongest spell):@50"<<endl;
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
        cout<<"Your hp has increased!"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough souls."<<endl;
    }
    else if(item=="strength"){
      if(souls>=4){
        atk+=2;
        souls-=4;
        lv++;
        mp++;
        cout<<"Your atk has increased!"<<endl;
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
          cout<<"You can now use combustion in battle!"<<endl;
        }
        else
        cout<<"Sorry, you don't have enough souls."<<endl;
      }
      else
      cout<<"You have already learnt combustion."<<endl;
    }
    else if(item=="firestorm"){
      if(firestorm==0){
        if(souls>=50){
          firestorm=1;
          souls-=50;
          lv++;
          mp++;
          cout<<"You can now use firestorm in battle!"<<endl;
        }
        else
        cout<<"Sorry, you don't have enough souls."<<endl;
      }
      else
      cout<<"You have already learnt firestorm."<<endl;
    }
    else
    cout<<"This ability doesn't exist."<<endl;
    cout<<"Your level:"<<lv<<" "<<"Your hp:"<<hp<<" "<<"Your atk:"<<atk<<endl;
    cout<<"Your skills:fireball";
    if(combustion==1)
    cout<<" "<<"combustion";
    if(firestorm==1)
    cout<<" "<<"firestorm";
    cout<<endl;
    cout<<"Is there anything you still want to improve? (Y/N)";
    cin>>cont;
    cout<<endl;
  }
  cout<<"Have a nice day."<<endl;
  return 0;
}

int battle(int &souls, int hp, int atk, int lv, int flasks, int mp, int combustion, int firestorm){
  int dungeon,tem,demon,dragon,slime,encounter,enemy;
  char explore='Y';
  while(explore=='Y'){
    tem=hp;
    cout<<"please enter a random number of the dungeon that you want to explore:";
    cin>>dungeon;
    cout<<endl;
    while(tem>0){
      srand(dungeon);
      encounter=rand()%4;
      if(encounter==1)
      enemy=1;
      else if(encounter==2)
      enemy=2;
      else;
      enemy=3;
      if(enemy==1){
        cout<<"You encounter a slime!"<<endl;
      }
      else if(enemy==2){
        cout<<"You encounter a dragon!"<<endl;
      }
      else if(enemy==3){
        cout<<"You encounter a demon!"<<endl;
      }
    }

    cout<<"Continue on exploring? (Y/N)";
    cin>>explore;
    cout<<endl;
  }
  return 0;
}

int main(){
  int souls,hp,atk,lv,flasks,mp,fireball,combustion,firestorm;
  hp=5;
  atk=1;
  souls=10;
  lv=1;
  flasks=3;
  mp=2;
  combustion=0;
  firestorm=0;
  merchant(souls,hp,atk,lv,mp,combustion,firestorm);
  battle(souls, hp, atk, lv, flasks,mp,combustion,firestorm);
  return 0;
}
