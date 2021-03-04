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
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		ll msf=arr[0],meh=arr[0];
		for(int i=1;i<n;i++){
			meh=max(arr[i],meh+arr[i]);
			msf=max(msf,meh);
		}
		cout<<msf<<endl;
	}
	return 0;
}

