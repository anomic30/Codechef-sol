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
		ll n,sum=0,arr[100000];
		cin>>n;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		sum=arr[0]+arr[1];
		cout<<sum<<endl;
	}
	return 0;
}

