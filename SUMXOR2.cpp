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
	int arr[]={1,3,5,2},sum=0;
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum+=arr[i]^arr[j];
		}
	}
	
	cout<<sum<<endl;
	return 0;
}

