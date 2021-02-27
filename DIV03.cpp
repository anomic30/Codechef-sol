//author: anomic30

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define MOD 1000000007
#define ll long long

int main(){
	IOS;
	ll t;
	cin>>t;
	while(t--){
		ll arr[11];
		for(ll i=1;i<11;i++){
			cin>>arr[i];
		}
		ll k;
		cin>>k;
		int m=0;
		for(ll i=10;i>0;i--){
			if(arr[i]==0){
				continue;
			}else{
				if(arr[i]>k){
					m=i;
					break;
				}else if(arr[i]<=k){
					k=k-arr[i];
				}
			}
		}
		cout<<m<<endl;
	}

	return 0;
}

