#include "pch.h"
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
string j = "Barbarian Bowl(c)"
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
//User Inputs
string z; //Chest
string x; //Arena
string y; //Rarity

int main(){
  cout<<"Please select one of the following chest types by entering the cooresponding letter"<<endl;
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
  cout<<e<<endl;
  cout<<f<<endl;
  cout<<g<<endl;
  cin>>z;
    if(z=="a"){
        cout<<"You picked a Wooden Chest."<<endl;
    }
    if(z=="b"){
        cout<<"You picked a Silver Chest."<<endl;
    }
    if(z=="c"){
        cout<<"You picked a Golden Chest."<<endl;
    }
    if(z=="d"){
        cout<<"You picked a Crown Chest."<<endl;
    }
    if(z=="e"){
        cout<<"You picked a Giant Chest."<<endl;
    }
    if(z=="f"){
        cout<<"You picked a Magical Chest."<<endl;
    }
    if(z=="g"){
        cout<<"You picked a Super Magical Chest."<<endl;
    }
    return 0;
}

