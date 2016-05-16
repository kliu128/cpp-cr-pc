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
int chest_cards;
//User Inputs
char z; //Chest
char x; //Arena
char y; //Rarity

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
  cin>>x;
    switch(x){
      case 'a':
      case 'A':
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
	          switch(z){
	          	case 'a':
			case 'A':
			        cout<<"You picked a Wooden Chest"<<endl;
			        chest_cards=3;
				break;
			case 'b':
			case 'B':
				chest_cards=3;
				cout<<"You picked a Silver Chest"<<endl;
				break;
			case 'c':
			case 'C':
				chest_cards=10;
				cout<<"You picked a Golden Chest"<<endl;
				break;
			case 'd':
			case 'D':
				chest_cards=20;
				cout<<"You picked a Crown Chest"<<endl;
				break;
			case 'e':
			case 'E':
				chest_cards=30;
				cout<<"You picked a Giant Chest"<<endl;
				break;
			case 'f':
			case 'F':
				chest_cards=80;
				cout<<"You picked a Magical Chest"<<endl;
				break;
			case 'g':
			case 'G':
				chest_cards=180;
				cout<<"You picked a Super Magical Chest"<<endl;
				break;
			default:
				cout<<"You did not enter a valid character"<<endl;
	    	}
		break;
		default:
			cout << "xxx" << endl;
    	}
    
    
    //TODO: Change these to switch
    /*
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
    */
    return 0;
}
BOSL036540OSX:~ a427658$ 
