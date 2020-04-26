#include <iostream>
using namespace std;
int merchant(int &money,int &hp,int &atk){
  cout<<"Welcome to the Witcher Shop."<<endl;
  cout<<"What do you want to buy?"<<endl;
  cout<<"your hp:"<<hp<<" "<<"your atk:"<<atk<<endl;
  char cont;
  cont='Y';
  while(cont=='Y'){
    cout<<"The amount of money you have:$"<< money << endl;
    cout<<"armor:$2, spells:$4"<<endl;
    cout<<"please enter what you want to buy:";
    string item;
    cin >> item;
    cout<<endl;
    if(item=="armor"){
      if(money>=2){
        hp+=3;
        money-=2;
        cout<<"your hp has increased"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough money."<<endl;
    }
    else if(item=="spells"){
      if(money>=4){
        atk+=2;
        money-=4;
        cout<<"your atk has increased"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough money."<<endl;
    }
    else{
      cout<<"This item doesn't exist."<<endl;
    }
    cout<<"your hp:"<<hp<<" "<<"your atk:"<<atk<<endl;
    cout<<"Is there anything you still want to buy? (Y/N):";
    cin>>cont;
  }
  cout<<"Have a nice day."<<endl;
  return 0;

}
int main(){
  int money;
  int hp, atk;
  hp=5;
  atk=1;
  money=10;
  merchant(money,hp,atk);
  return 0;
}
