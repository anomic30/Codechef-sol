//author: anomic30

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define MOD 1000000007
#define ll long long

int main(){
	IOS;
	int t;
	cin>>t;
	while(t--){
		ll s;
		cin>>s;
		ll song[s];
		for(ll i=0;i<s;i++){
			cin>>song[i];
		}
		ll total=0;
		for(ll i=0;i<s;i++){
			ll e;
			cin>>e;
			ll watch=0;
			for(ll i=0;i<e;i++){
				ll n;
				cin>>n;
				watch+=n;
			}
			if(e>1){
				ll r=song[i]*(e-1);
				watch-=r;
			}
			total+=watch;
		}
		cout<<total<<endl;
	}

	return 0;
}

