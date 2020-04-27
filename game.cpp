#include <iostream>
using namespace std;
int merchant(int &souls,int &hp,int &atk, int &lv){
  cout<<"Welcome to the Witcher Shop."<<endl;
  cout<<"What do you want to improve?"<<endl;
  cout<<"your hp:"<<hp<<" "<<"your atk:"<<atk<<endl;
  char cont;
  cont='Y';
  while(cont=='Y'){
    cout<<"The amount of souls you have:$"<< souls << endl;
    cout<<"armor:$2, spells:$4"<<endl;
    cout<<"please enter what you want to improve:";
    string item;
    cin >> item;
    cout<<endl;
    if(item=="armor"){
      if(souls>=2){
        hp+=3;
        souls-=2;
        lv++;
        cout<<"your hp has increased"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough souls."<<endl;
    }
    else if(item=="spells"){
      if(souls>=4){
        atk+=2;
        money-=4;
        cout<<"your atk has increased"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough souls."<<endl;
    }
    else{
      cout<<"This ability doesn't exist."<<endl;
    }
    cout<<"your hp:"<<hp<<" "<<"your atk:"<<atk<<endl;
    cout<<"Is there anything you still want to improve? (Y/N):";
    cin>>cont;
  }
  cout<<"Have a nice day."<<endl;
  return 0;
}

int battle(int &souls, int &hp, int &atk, int &lv){
}
int main(){
  int souls;
  int hp, atk,lv;
  hp=5;
  atk=1;
  souls=10;
  lv=1
  merchant(souls,hp,atk,lv);
  return 0;
}
