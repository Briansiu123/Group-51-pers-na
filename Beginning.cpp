#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("Player.txt");
    
    if ( fout.fail() ){
        cout << " Error in file opening!"<<endl;
        exit(1);
    }
    string name;
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
        cout<<"You are a pessimistic";
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
        cout<<"You are a optimist";
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
}