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
	ll r;
	cin>>r;
	if(r>=1 && r<=50){
		cout<<100<<endl;
	}else if(r>=51 && r<=100){
		cout<<50<<endl;
	}else{
		cout<<0<<endl;
	}
	return 0;
}

