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
		double n;
		cin>>n;
		double hra,da,gross;
		if(n<1500){
			hra=(0.1*n);
			da=(0.9*n);
			gross=n+hra+da;
		}else{
			hra=500;
			da=(0.98*n);
			gross=n+hra+da;
		}
		cout<<fixed<<setprecision(2)<<gross<<endl;
	}
	return 0;
}

