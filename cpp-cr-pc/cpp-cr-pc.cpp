﻿#include "pch.h"
#include "cpp-cr-pc.h"

#include <iostream>
using namespace std;
//Chest Types
string a = "Wooden Chest(a)";
string b = "Silver Chest(b)";
string c = "Golden Chest(c)";
string d = "Crown Chest(d)";
string e = "Giant Chest(e)";
string f = "Magical Chest(f)";
string g = "Super Magical Chest(g)";
//Arenas
string h = "Goblin Stadium(a)";
string i = "Bone Pit(b)";
string j = "Barbarian Bowl(c)";
string k = "P.E.K.K.A's Playhouse(d)";
string l = "Spell Valley(e)";
string m = "Builder's Workshop(f)";
string n = "Royal Arena(g)";
string o = "Legendary Arena(h)";
//Rarity
string p = "Common(a)";
string q = "Rare(b)";
string r = "Epic(c)";
string s = "Legendary(d)";
//Card numbers
int total_cards;
int total_cards_common;
//User Inputs
string z; //Chest
string x; //Arena
string y; //Rarity

int main(){
  cout<<"Please select the arena in which your chest originates by entering the corresponding letter"<<endl;
  cout<<h<<endl;
  cout<<i<<endl;
  cout<<j<<endl;
  cout<<k<<endl;
  cout<<l<<endl;
  cout<<m<<endl;
  cout<<n<<endl;
  cout<<o<<endl;
  cin>>z;
    if(x=="a"||"A"){
        cout<<"You picked Goblin Stadium"<<endl;
        total_cards=18;
        cout<<"Now please select the type of chest you have by entering the corresponding letter"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
        cout<<g<<endl;
        cin>>z;
    }
    if(x=="b"||"B"){
        cout<<"You picked Bone Pit"<<endl;
        total_cards=24;
        cout<<"Now please select the type of chest you have by entering the corresponding letter"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
        cout<<g<<endl;
        cin>>z;
          if(z=="a"||"A"){
            cout<<"You picked a Wooden Chest"<<endl;
          }
          if(z=="b"||"B"){
            cout<<"You picked a Silver Chest"<<endl;
          }
          if(z=="c"||"C"){
            cout<<"You picked a Golden Chest"<<endl;
          }
          if(z=="d"||"D"){
            cout<<"You picked a Crown Chest"<<endl;
          }
          if(z=="e"||"E"){
            cout<<"You picked a Giant Chest"<<endl;
          }
          if(z=="f"||"F"){
            cout<<"You picked a Magical Chest"<<endl;
          }
          if(z=="g"||"G"){
            cout<<"You picked a Super Magical Chest"<<endl;
          }
    }
    if(x=="c"||"C"){
        cout<<"You picked Barbarian Bowl"<<endl;
        total_cards=30;
        cout<<"Now please select the type of chest you have by entering the corresponding letter"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
        cout<<g<<endl;
        cin>>z;
    }
    if(x=="d"||"D"){
        cout<<"You picked P.E.K.K.A's Playhouse"<<endl;
        total_cards=37;
        cout<<"Now please select the type of chest you have by entering the corresponding letter"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
        cout<<g<<endl;
        cin>>z;
    }
    if(x=="e"||"E"){
        cout<<"You picked Spell Valley"<<endl;
        total_cards=44;
        cout<<"Now please select the type of chest you have by entering the corresponding letter"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
        cout<<g<<endl;
        cin>>z;
    }
    if(x=="f"||"F"){
        cout<<"You picked Builder's Workshop"<<endl;
        total_cards=49;
        cout<<"Now please select the type of chest you have by entering the corresponding letter"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
        cout<<g<<endl;
        cin>>z;
    }
    if(x=="g"||"G"){
        cout<<"You picked Royal Arena"<<endl;
        total_cards=54;
        cout<<"Now please select the type of chest you have by entering the corresponding letter"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
        cout<<g<<endl;
        cin>>z;
    }
    if(x=="h"||"H"){
        cout<<"You picked Legendary Arena";
        total_cards=54;
        cout<<"Now please select the type of chest you have by entering the corresponding letter"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
        cout<<g<<endl;
        cin>>z;
    }
    return 0;
}

