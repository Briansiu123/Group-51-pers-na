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
  int dungeon,tem_hp,tem_mp,tem_flask,demon,dragon,slime,encounter,enemy_hp,enemy_atk,drop;
  char explore='Y';
  string action;
  while(explore=='Y'){
    tem_hp=hp;
    tem_mp=mp;
    tem_flask=flasks;
    cout<<"please enter a random number of the dungeon that you want to explore:";
    cin>>dungeon;
    cout<<endl;
    cout<<endl;
    srand(dungeon);
    encounter=rand()%4;
    if(encounter==1){
      cout<<"You encounter a slime!"<<endl;
      enemy_hp=lv*0.8;
      enemy_atk=lv*0.2;
      drop=lv*0.5;
    }
    else if(encounter==2){
      cout<<"You encounter a dragon!"<<endl;
      enemy_hp=lv*1.3;
      enemy_atk=lv*0.5;
      drop=lv*0.8;
    }
    else if(encounter==3){
      cout<<"You encounter a demon!"<<endl;
      enemy_hp=lv*1.8;
      enemy_atk=lv;
      drop=lv*1.2;
    }
    while(tem_hp>0 || enemy_hp<=0){
      cout<<endl;
      cout<<"Enemy's hp:"<<enemy_hp<<endl;
      cout<<"Your hp:"<<hp<<" "<<"Your mp:"<<mp<<" "<<"Flasks:"<<flasks<<endl;
      cout<<"Action: attack / spell / flask (heal yourself) ";
      cout<<endl;
      cout<<"Please enter what you want to do:";
      cin>>action;
      if(action=="attack"){
        enemy_hp-=atk;
        cout<<"You reduce enemy's hp by "<<atk<<"."<<endl;
      }
      else if(action=="spell"){
        cout<<"spells: fireball(-2mp)";
        if(combustion==1){
          cout<<" "<<"combustion(-5mp)";
        }
        if(firestorm==1){
          cout<<" "<<"firestorm(-10mp)";
        }
        cout<<endl;
        cout<<"Please enter which spell you want to use:";
        cin>>action;
        cout<<endl;
        if(action=="fireball"){
          if(tem_mp>=2){
            tem_mp-=2;
            enemy_hp-=atk*2;
            cout<<"You reduce enemy's hp by "<<atk*2<<"."<<endl;
          }
          else
          cout<<"Sorry, you don't have enough mp to do that."<<endl;
        }
        else if(action=="combustion"){
          if(tem_mp>=5){
            tem_mp-=5;
            enemy_hp-=atk*3;
            cout<<"You reduce enemy's hp by "<<atk*3<<"."<<endl;
          }
          else
          cout<<"Sorry, you don't have enough mp to do that."<<endl;
        }
        else if(action=="firestorm"){
          if(tem_mp>=10){
            tem_mp-=10;
            enemy_hp-=atk*5;
            cout<<"You reduce enemy's hp by "<<atk*5<<"."<<endl;
          }
          else
          cout<<"Sorry, you don't have enough mp to do that."<<endl;
        }
        else
        cout<<"This spell doesn't exist."<<endl;
      }
      else if(action=="flask"){
        if(tem_flask>=0){
          tem_flask--;
          tem_hp+=hp*0.3;
          int heal;
          heal=hp*0.3;
          cout<<"You hp increases by "<<heal<<"."<<endl;
        }
        else
        cout<<"Sorry, you don't have any flasks left."<<endl;
      }
      else{
        cout<<"This action doesn't exist"<<endl;
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
  hp=10;
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
