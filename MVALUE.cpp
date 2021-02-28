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
		sort(arr,arr+n);
		ll end=arr[n-1]*arr[n-2]+max((arr[n-1]-arr[n-2]),(arr[n-2]-arr[n-1]));
		ll start=arr[0]*arr[1]+max((arr[0]-arr[1]),(arr[1]-arr[0]));
		if(end>start){
			cout<<end<<endl;
		}else{
			cout<<start<<endl;
		}
	}

	return 0;
}

