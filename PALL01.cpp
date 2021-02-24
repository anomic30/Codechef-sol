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
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll temp=n,rev=0;
		while(temp!=0){
			ll r=temp%10;
			rev=rev*10+r;
			temp=temp/10;
		}
		if(rev==n){
			cout<<"wins"<<endl;
		}else{
			cout<<"loses"<<endl;
		}
	}
	return 0;
}

