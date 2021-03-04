//author: anomic30

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define MOD 1000000007
#define ll long long

int main(){
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unordered_map<int,int> m;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			m[a]++;
		}
		int maximum=0,res=-1;
		for(auto i:m){
			if(maximum<i.second){
				res=i.first;
				maximum=i.second;
			}
		}
		double survey=(double)n/2;
		if(maximum>survey){
			cout<<res<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	return 0;
}

