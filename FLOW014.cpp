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
		float a,b,c;
		cin>>a>>b>>c;
		if(a>50 && b<0.7 && c>5600){
			cout<<10<<endl;
		}else if(a>50 && b<0.7){
			cout<<9<<endl;
		}else if(b<0.7 && c>5600){
			cout<<8<<endl;
		}else if(a>50 && c>5600){
			cout<<7<<endl;
		}else if(a>50 || b<0.7 || c>5600){
			cout<<6<<endl;
		}else{
			cout<<5<<endl;
		}
	}
	return 0;
}

