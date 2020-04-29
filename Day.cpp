#include <iostream>

using namespace std;

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
            cout<<"He needs some woods, animal furs and their teeth"<<endl;
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

int main()
{
    int action;
    
    int Wood = 0; //For Chopping
    
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
                Talking()
            }
            if (choice == "B"){
                cout<<"Chopping"<<endl;
            }
            if (choice == "C"){
                cout<<"Exploring"<<endl;
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
            }
            if (choice == "G"){
                cout<<"Shopping"<<endl;
            }
            if (choice == "H"){
                cout<<"Sleeping"<<endl;
                cout<<"You want to sleep but you realize once you sleep you will wake up tomorrow, do you really want to sleep?"<<endl;
                cout<<"But it is too late now you already slept"<<endl;
                action = -1 
            }
            if (choice == "I"){
                cout<<"Studying"<<endl;
            }
            if (choice == "J"){
                cout<<"Training"<<endl;
            }
            action = action - 1;
        }
    }
    return 0;
}