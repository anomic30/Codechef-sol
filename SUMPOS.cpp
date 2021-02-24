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
  		int arr[3];
		for(int i=0;i<3;i++){
			cin>>arr[i];
		}
		if(arr[0]+arr[1]==arr[2]){
			cout<<"YES"<<endl;
		}else if(arr[1]+arr[2]==arr[0]){
			cout<<"YES"<<endl;
		}else if(arr[2]+arr[0]==arr[1]){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}

