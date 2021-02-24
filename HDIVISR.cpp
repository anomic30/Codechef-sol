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
  	int n;
  	cin>>n;
  	int maxm=-1;
  	for(int i=1;i<n;i++){
  		if(n%i==0 &&(i>=1 && i<=10)){
  			maxm=max(maxm,i);	
		}
	}
	cout<<maxm<<endl;

	return 0;
}

