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
		ll arr[n+1];
		arr[0]=0;
		arr[1]=1;
		for(ll i=2;i<=n;i++){
			arr[i]=(i*arr[i-1])%MOD;
		}
		ll sum=0;
		for(ll i=1;i<=n;i++){
			sum=sum+arr[i];
		}
		cout<<sum%MOD<<endl;
	}
	return 0;
}

