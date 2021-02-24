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
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll GCD=__gcd(a,b);
		ll LCM=(a*b)/GCD;
		cout<<GCD<<" "<<LCM<<endl;
		
	}
	return 0;
}

