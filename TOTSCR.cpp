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
		ll n,k;
		cin>>n>>k;
		ll arr[k];
		for(ll i=0;i<k;i++){
			cin>>arr[i];
		}
		while(n--){
			string s;
			cin>>s;
			ll sum=0;
			for(ll i=0;i<s.length();i++){
				if(s[i]=='1'){
					sum+=arr[i];
				}
			}
			cout<<sum<<endl;
		}
	}

	return 0;
}

