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
	ll a,b;
	cin>>a;
	cin>>b;
	if(a>b){
		cout<<a-b<<endl;
	}else{
		cout<<a+b<<endl;
	}
	return 0;
}

