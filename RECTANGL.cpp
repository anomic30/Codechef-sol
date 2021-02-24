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
	ll l;
	cin>>l;
	while(l--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		int sum=a+b+c+d;
		if(a=b=c=d){
			cout<<"NO"<<endl;
		}else{
			if(sum%2==0){
			cout<<"YES"<<endl;
			}else{
			cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}

