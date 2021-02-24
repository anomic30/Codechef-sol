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
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll x=arr[0];
		ll y=arr[1];
		ll z=arr[n-1];
		ll sum=abs(x-y)+abs(y-z)+abs(z-x);
		cout<<sum<<endl;
	}
	return 0;
}

