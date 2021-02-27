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
		ll n,k,temp;
		cin>>n>>k;
		if(k==0){
			cout<<n<<endl;
		}else{
			if(n<k){
				cout<<n<<endl;
			}else if(n==k){
				cout<<0<<endl;
			}else{
				cout<<n%k<<endl;
			}
		}
	}

	return 0;
}

