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
  cout<<"Please select the arena in which your chest originates by entering the cooresponding letter"<<endl;
  cout<<h<<endl;
  cout<<i<<endl;
  cout<<j<<endl;
  cout<<k<<endl;
  cout<<l<<endl;
  cout<<m<<endl;
  cout<<n<<endl;
  cout<<o<<endl;
  cin>>z;
    if(z=="h"){
        cout<<"You picked a Wooden Chest."<<endl;
    }
    if(z=="i"){
        cout<<"You picked a Silver Chest."<<endl;
    }
    if(z=="j"){
        cout<<"You picked a Golden Chest."<<endl;
    }
    if(z=="k"){
        cout<<"You picked a Crown Chest."<<endl;
    }
    if(z=="l"){
        cout<<"You picked a Giant Chest."<<endl;
    }
    if(z=="m"){
        cout<<"You picked a Magical Chest."<<endl;
    }
    if(z=="n"){
        cout<<"You picked a Super Magical Chest."<<endl;
    }
    if(z=="o"){
      cout<<"You picked Legendary Arena"
    }
    return 0;
}

