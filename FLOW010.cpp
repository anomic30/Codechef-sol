/**
 *   author: anomic30
**/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define MOD 1000000007
#define ll long long

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		char s;
		cin>>s;
		if(s=='B' || s=='b'){
			cout<<"BattleShip"<<endl;
		}
		else if(s=='C' || s=='c'){
			cout<<"Cruiser"<<endl;
		}
		else if(s=='D' || s=='d'){
			cout<<"Destroyer"<<endl;
		}
		else if(s=='F' || s=='f'){
			cout<<"Frigate"<<endl;
		}
	}
	return 0;
}

