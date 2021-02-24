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
  		int n,k;
		cin>>n>>k;
		int arr[n];
		int negCount=0,pass=ceil((float)n/2),maxCount=0,botCount=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]==-1){
				negCount++;
			}
			if(arr[i]==1 || arr[i]==0){
				botCount++;
			}
			maxCount=max(maxCount,arr[i]);
		}
		if((n-negCount)<pass){
			cout<<"Rejected"<<endl;
		}else{
			if(maxCount>k){
				cout<<"Too Slow"<<endl;
			}else{
				if((n-negCount)>=n && botCount==n){
					cout<<"Bot"<<endl;
				}else{
					cout<<"Accepted"<<endl;
				}
			}
		}	
	}

	return 0;
}

