#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int train()
{
    int check;
    srand(time(NULL));
    check = rand() % 2 + 1;
    if (check == 1){
        cout<<"Outside is raining and you decided to train some other day"    
    }
    if (check == 2){
        cout<<"You begin your trainning"
        int path;
        srand(time(NULL));
        path = rand() % 2 + 1;
        if (path == 1){
            return 1
        }
        if (path == 2){
            return 2
        }
    } 
}

bool study()
{
    int check;
    srand(time(NULL));
    check = rand() % 2 + 1;
    if (check == 1){
        cout<<"You fall asleep"<<endl;
    }
    if (check == 2){
        cout<<"Your intelligence increased!"
        return true
    }
    
}
void Talking()
{
    string walk;
    int wander = 0;
    int check = 0;
    cout<<"It is a beautiful day outside, birds are sining, flowers are blooming, on days like these, you decide to go talk to the villagers"<<endl;
    cout<<"You know where can you find the villagers but where should you go?"<<endl;
    cout<<"A : Blacksmith"<<endl;
    cout<<"B : Elderly Home"<<endl;
    cout<<"C : Bizzar"<<endl;
    cout<<"D : Wander around"<<endl;
    cin >> walk;
    if (walk == "A"){
        cout<<"You decide to pay Blacksmith a vist"<<endl;
        srand(time(NULL));
        check = rand() % 2 + 1;
        if (check == 1){
            cout<<"The Blacksmith is not there"<<endl;
        } 
        if (check == 2){
            cout<<"The Blacksmith is working, he is actually always working, he looked at you and told you he needs some materials to craft weapons"<<endl;
            cout<<"He needs some woods and animal teeth"<<endl;
        }
    }
    if (walk == "B"){
        cout<<"You decide to go visit the Elderlies"<<endl;
        srand(time(NULL));
        check = rand() % 2 + 1;
        if (check == 1){
            cout<<"The Elderly Home is closed"<<endl;
        } 
        if (check == 2){
            cout<<"The Elder of the Elders told you that he can feel there is darkness lurking in the forest, becareful during explore"<<endl;
        }
        
    }
    if (walk == "C"){
        cout<<"You have some money at hand and decide to spend some at Bizzar"<<endl;
        srand(time(NULL));
        check = rand() % 2 + 1;
        if (check == 1){
            cout<<"There is no one there"<<endl;
        } 
        if (check == 2){
            cout<<"A bunch of aunties buying stuff, from them you gained some knowledge"<<endl;
            cout<<"The market price for wood is the cheapest and the most expensive is fish"<<endl;
            cout<<"Sometimes people will pay a higher price for things that they need"<<endl;
        }
    }
    if (walk == "D"){
        cout<<"You have no idea where to go and decide to wander around"<<endl;
        srand(time(NULL));
        check = rand() % 2 + 1;
        if (check == 1){
            cout<<"You walk around"<<endl;
        } 
        if (check == 2){
            cout<<"You discover ????? house"<<endl;
            cout<<"You find out the house is locked and you need a key"<<endl;
        }
    }
}

int Fishing()
{
    int fish;
    srand(time(NULL));
    fish = rand() % 10 + 1;
    if (fish == 10){
        return 5;
    }
    if (fish > -1 && fish < 5){
        return 1;
    }
    if (fish > 4 && fish < 8){
        return 2;
    }
    if (fish == 8){
        return 3;
    }
    if (fish == 9){
        return 4;
    }
    fish = 0;
}
int merchant(int &souls, int &hp, int &strength, int &lv, int &intelligence, int &combustion, int &firestorm,int &agility, int &luck){
  cout<<"Welcome to the Witcher House!"<<endl;
  cout<<"What do you want to improve?"<<endl;
  cout<<"Your level:"<<lv<<" "<<"Hp:"<<hp<<" "<<"Intelligence:"<<intelligence<<" "<<"Strength:"<<strength<<" "<<"Agility:"<<agility<<" "<<"Luck:"<<luck<<endl;
  char cont;
  cont='Y';
  while(cont=='Y'){
    cout<<"The amount of souls you have:@"<<souls<<endl;
    cout<<endl;
    cout<<"health:@4, strength:@4, intelligence:@4, agility:@4, luck:@4, combustion(a powerfull spell):@20, firestorm(the strongest spell):@50"<<endl;
    cout<<"Please enter what you want to improve/learn:";
    string item;
    cin>>item;
    cout<<endl;
    if(item=="health"){
      if(souls>=4){
        hp+=3;
        souls-=4;
        lv++;
        cout<<"Your hp has increased!"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough souls."<<endl;
    }
    else if(item=="strength"){
      if(souls>=4){
        strength+=2;
        souls-=4;
        lv++;
        cout<<"Your atk has increased!"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough souls."<<endl;
    }
    else if(item=="intelligence"){
      if(souls>=4){
        intelligence+=2;
        souls-=4;
        lv++;
        cout<<"Your mp has increased!"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough souls."<<endl;
    }
    else if(item=="agility"){
      if(souls>=4){
        agility+=2;
        souls-=4;
        lv++;
        cout<<"Your spell atk has increased!"<<endl;
      }
      else
      cout<<"Sorry, you don't have enough souls."<<endl;
    }
    else if(item=="luck"){
      if(souls>=4){
        luck+=1;
        souls-=4;
        lv++;
        cout<<"Your will get more souls!"<<endl;
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
    cout<<"Your level:"<<lv<<" "<<"Hp:"<<hp<<" "<<"Intelligence:"<<intelligence<<" "<<"Strength:"<<strength<<" "<<"Agility:"<<agility<<" "<<"Luck:"<<luck<<endl;
    cout<<"Your skills:fireball";
    if(combustion==1)
    cout<<" "<<"combustion";
    if(firestorm==1)
    cout<<" "<<"firestorm";
    cout<<endl;
    cout<<endl;
    cout<<"Is there anything you still want to improve? (Y/N)";
    cin>>cont;
    cout<<endl;
  }
  cout<<"Have a nice day."<<endl;
  cout<<"You spent a day in shopping."<<endl;
  cout<<endl;
  return 0;
}

int battle(int &souls, int hp, int strength, int lv, int flasks, int intelligence, int combustion, int firestorm, int agility, int luck){
  int dungeon,tem_hp,tem_mp,tem_flask,encounter,enemy_hp,enemy_atk,drop;
  char explore='Y';
  string action;
  while(explore=='Y'){
    tem_hp=hp;
    tem_mp=intelligence;
    tem_flask=flasks;
    cout<<"please enter a random number of the dungeon that you want to explore:";
    cin>>dungeon;
    cout<<endl;
    cout<<endl;
    srand(dungeon);
    encounter=rand()%4;
    if(encounter==1 || encounter==3){
      cout<<"You encounter a slime!"<<endl;
      enemy_hp=lv*0.8;
      enemy_atk=lv*0.2;
      drop=lv*(luck*0.1)+1;
    }
    else if(encounter==2){
      cout<<"You encounter a dragon!"<<endl;
      enemy_hp=lv*1.3;
      enemy_atk=lv*0.5;
      drop=lv*0.2*luck+2;
    }
    else{
      cout<<"You encounter a demon!"<<endl;
      enemy_hp=lv*1.8;
      enemy_atk=lv;
      drop=lv*0.4*luck+3;
    }
    while(tem_hp>0 && enemy_hp>0){
      cout<<endl;
      cout<<"Enemy's hp:"<<enemy_hp<<endl;
      cout<<"Your hp:"<<tem_hp<<" "<<"Mp:"<<tem_mp<<" "<<"Flasks:"<<tem_flask<<endl;
      cout<<"Action: attack / spell / flask (heal yourself) ";
      cout<<endl;
      cout<<endl;
      cout<<"Please enter what you want to do:";
      cin>>action;
      if(action=="attack"){
        enemy_hp-=strength;
        cout<<"You reduce enemy's hp by "<<strength<<"."<<endl;
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
            enemy_hp-=agility*2;
            cout<<"You reduce enemy's hp by "<<agility*2<<"."<<endl;
          }
          else
          cout<<"Sorry, you don't have enough mp to do that."<<endl;
        }
        else if(action=="combustion"){
          if(tem_mp>=5){
            tem_mp-=5;
            enemy_hp-=agility*3;
            cout<<"You reduce enemy's hp by "<<agility*3<<"."<<endl;
          }
          else
          cout<<"Sorry, you don't have enough mp to do that."<<endl;
        }
        else if(action=="firestorm"){
          if(tem_mp>=10){
            tem_mp-=10;
            enemy_hp-=agility*5;
            cout<<"You reduce enemy's hp by "<<agility*5<<"."<<endl;
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
      tem_hp-=enemy_atk;
      if(enemy_hp>0)
      cout<<"You're attacked by the enemy! You hp is reduced by "<<enemy_atk<<"."<<endl;
    }
    if(tem_hp<=0){
      cout<<"You lose the fight and escape."<<endl;
    }
    else{
      cout<<endl;
      cout<<"Congratulation, you eliminate the enemy!"<<endl;
      cout<<"You get "<<drop<<" souls!"<<endl;
      souls+=drop;
    }
    cout<<"Continue on exploring? (Y/N)";
    cin>>explore;
    cout<<endl;
  }
  cout<<"You spent a day in exploring."<<endl;
  cout<<endl;
  return 0;
}

int main()
{
    ofstream fout("Player.txt");
    
    if ( fout.fail() ){
        cout << " Error in file opening!"<<endl;
        exit(1);
    }
    string name;
    int souls,hp, lv, flasks,fireball, combustion, firestorm;
    hp=10;
    souls=10;
    lv=1;
    flasks=3;
    combustion=0;
    firestorm=0;
    cout<<"Please enter your name: "<<endl;
    cin >> name;
    fout << name;
    cout<<"Welcome"<<" "<<name<<endl;
    cout<<"To begin with, let me ask you a few questions"<<endl;
    cout<<"The questions will decide your personality which will have a slight impact on the stats of your character in game"<<endl;
    cout<<"You wake up and find yourself in an unfamilar place, what will you do?"<<endl;
    cout<<"A: Find if you have your phone and check your location in G__gle Map"<<endl;
    cout<<"B: Walk around and see if you can find any clue to where you are"<<endl;
    cout<<"C: Sleep and pretend everything will be fine after your sleep"<<endl;
    string choiceA;
    cout<<"Please input your choice(Capital letter A,B or C)";
    cin >> choiceA;
    cout<<"You realized you still have no idea where you are and you heard footsteps you have to act quick!"<<endl;
    cout<<"A: Hide behind the door and prepare to attack"<<endl;
    cout<<"B: Find something to defend yourself with"<<endl;
    cout<<"C: Go back to the bed and pretend to sleep"<<endl;
    cout<<"What is your choice?"<<endl;
    string choiceB;
    cin >> choiceB;
    cout<<"The door is opened and you found out is a ?"<<endl;
    cout<<"A: Ghost"<<endl;
    cout<<"B: A human"<<endl;
    cout<<"C: ???(some unknown creature)"<<endl;
    string choiceC;
    cin >> choiceC;
    int personality;
    personality = 0;
    if (choiceA == "A"){
        personality = personality + 1;
    }
    if (choiceA == "B"){
        personality = personality + 2;
    }
    if (choiceA == "C"){
        personality = personality + 3;
    }
    
    if (choiceB == "A"){
        personality = personality + 1;
    }
    if (choiceB == "B"){
        personality = personality + 2;
    }
    if (choiceB == "C"){
        personality = personality + 3;
    }
    
    if (choiceC == "A"){
        personality = personality + 1;
    }
    if (choiceC == "B"){
        personality = personality + 2;
    }
    if (choiceC == "C"){
        personality = personality + 3;
    }
    cout<<"Your personality is : "<<personality<<endl;
    if (personality >2 && personality <5){
        cout<<"You are a pessimistic"<<endl;
        int strength, intelligence, agility, luck;
        strength = 2;
        intelligence = 4;
        agility = 3;
        luck = 1;
        cout<<"Strength : "<<strength<<endl;
        cout<<"Intelligence : "<<intelligence<<endl;
        cout<<"Agility :"<<agility<<endl;
        cout<<"Luck : "<<luck<<endl;
    }
    if (personality >4 && personality <8){
        cout<<"You are a optimist"<<endl;
        int strength, intelligence, agility, luck;
        strength = 3;
        intelligence = 2;
        agility = 2;
        luck = 3;
        cout<<"Strength : "<<strength<<endl;
        cout<<"Intelligence : "<<intelligence<<endl;
        cout<<"Agility : "<<agility<<endl;
        cout<<"Luck : "<<luck<<endl;
    }
    if (personality >7 && personality <10){
        cout<<"YOLO"; int strength, intelligence, agility, luck;
        srand(time(NULL));	
        for (int i = 0; i < 5; ++i){ 
            cout << rand() % 10 + 1 << endl;
        }
        cout<<"Strength : "<<strength<<endl;
        cout<<"Intelligence : "<<intelligence<<endl;
        cout<<"Agility : "<<agility<<endl;
        cout<<"Luck : "<<luck<<endl;
    }
    
    
    int action;
    
    int Wood = 0; //For Chopping
    
    int food = 0; //For Hunting
    int teeth = 0; //For Hunting
    
    int FISH = 0; //For Fishing
    int potion = 0; //For Fishing
    
    int hours = 0; //For Gaming
    
    cout<<"Hi";
    for (int i = 1; i < 11; ++i){
        cout<<"Today is day: "<<i<<endl;
        if (i == 1){
            cout<<"There are 10 action points for you every day and you can choose what to do"<<endl;
            cout<<"Every action will have their own outcome which may or may not affect the outcome of the story"<<endl;
            cout<<"There is also a success/failure check for every action which depends on the stat of yourself"<<endl;
            cout<<"Below is a brief introduction of the actions"<<endl;
            cout<<"Communication: Talking with villagers in the village. Sometimes it is just some basic chatting but sometimes they may tell you some important information."<<endl;
            cout<<"Chopping: Well, no one can say no to some extra woods, you can sell them to the merchant in exchange for money or perhaps there are some other use?"<<endl;
            cout<<"Hunting: Technology isn't that advanced and the only way to heal up your wounds is to ensure your tummy is full and ofcourse there might be some special use."<<endl;
            cout<<"Fishing: Fishing is one kind of hunting but since fishing is a hobby of ?????? sometimes you get some good things from fishing sometimes you just waste your time(No this is not gambling)"<<endl;
            cout<<"Shopping: IF you have a girlfriend, you will know why shopping spends you one action point, it should actually spend 10."<<endl;
            cout<<"Training: It is a peaceful time but yet a strong body will always be of help when there is an accident"<<endl;
            cout<<"Studying: Don't ask why you can study in a game, let's just say it is everywhere."<<endl;
            cout<<"Exploring: You explore."<<endl;
            cout<<"Gaming: ?????? thinks that if there is studying, there should also be gaming. Gaming in a game, how exciting."<<endl;
            cout<<"Sleep: In case you are bored, why not take a sleep?"<<endl;
        }
        action = 10;
        while (action > -1){
            cout<<"You have "<< action<<" action"<<endl;
            cout<<"Please choose an action:"<<endl;
            cout<<"A : Communication"<<endl;
            cout<<"B : Chopping"<<endl;
            cout<<"C : Exploring"<<endl;
            cout<<"D : Fishing"<<endl;
            cout<<"E : Gaming"<<endl;
            cout<<"F : Hunting"<<endl;
            cout<<"G : Shopping"<<endl;
            cout<<"H : Sleep"<<endl;
            cout<<"I : Studying"<<endl;
            cout<<"J : Training"<<endl;
            string choice;
            choice = "none";
            cin >> choice;
            if (choice == "A"){
                cout<<"Communicating"<<endl;
                Talking();
            }
            if (choice == "B"){
                cout<<"Chopping Trees"<<endl;
                wood = 1 + strength/2;
                cout<<"You now have "<<wood<<"wood"<<endl;
            }
            if (choice == "C"){
                cout<<"Exploring"<<endl;
                battle(souls, hp, strength, lv, flasks,intelligence,combustion,firestorm,agility,luck);
            }
            if (choice == "D"){
                cout<<"Fishing"<<endl;
                cout<<Fishing()<<endl;
                if (Fishing() == 1){
                    cout<<"You spend a day fishing and got nothing"<<endl;
                }
                if (Fishing() == 2){
                    cout<<"You got a fish!"<<endl;
                    FISH = FISH + 1;
                }
                if (Fishing() == 3){
                    cout<<"The fish got away and you got hurt"<<endl;
                    cout<<"HP-?"<<endl;
                }
                if (Fishing() == 4){
                    cout<<"You didn't get any fish but you spent a day chatting with fishermen"<<endl;
                    cout<<"He told you that you can sell the fish to the merchant or keep on fishing till you have 5 fish then ????? will come and grant you a wish"<<endl;
                }
                if (Fishing() == 5){
                    cout<<"You didn't fished any fish but got a mysterious potion"<<endl;
                    cout<<"The potion seems to have a certain value but ofcourse you can drink it"<<endl;
                    cout<<"Who can say no to a mysterious potion?"<<endl;
                    potion = potion + 1;
                }
            }
            if (choice == "E"){
                cout<<"Gaming"<<endl;
                hours = hours + 1;
                cout<<"You spent " << hours << " hour(s) playing games, don't tell me you expect to get anything"<<endl;
                if (hours == 3){
                    cout<<"You realize gaming is a waste of time and the word OTAKU appears in your mind, you decide to do some intense training"<<endl;
                }
                if (hours > 3){
                    cout<<"Why go outside when you can stay at home? Why go outside when outside is so dangerous? You have made up your mind and to become an OTAKU"<<endl;
                    cout<<"Achievement unlocked : An OTAKU becoming an OTAKU in game (OTAKU, please don't get offended)"<<endl;
                }
            
            }
            if (choice == "F"){
                cout<<"Hunting"<<endl;
                cout<<"You spend some time in the forest"<<endl;
                food = food + 1 + intelligence/10 + agility/10;
                teeth = teeth + food/2
                cout<<"You now have "<<food<<" food and "<<teeth<<" teeth"<<endl;
            }
            if (choice == "G"){
                cout<<"Shopping"<<endl;
                merchant(souls,hp,strength,lv,intelligence,combustion,firestorm,agility,luck);
            }
            if (choice == "H"){
                cout<<"Sleeping"<<endl;
                cout<<"You want to sleep but you realize once you sleep you will wake up tomorrow, do you really want to sleep?"<<endl;
                cout<<"But it is too late now you already slept"<<endl;
                action = -1;
            }
            if (choice == "I"){
                cout<<"Studying"<<endl;
                if (study() == true){
                    cout<<"Current Intelligence: "<< intelligence<< "increased by 1"<<endl;
                    intelligence = intelligence + 1;
                }
            }
            if (choice == "J"){
                cout<<"Training"<<endl;
                if (train() == 1){
                    cout<<"Strength increased!"<<endl;
                    strength = strength + 1;
                }
                if (train() == 2){
                    cout<<"Agility increased!"<<endl;
                    agility = agility + 1;
                }
            }
            action = action - 1;
        }
    }
    return 0;
}
