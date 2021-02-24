#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		int count=0;
		unordered_set<int> s;
		for(int i=l;i<=r;i++){
			for(int j=i;j<=r;j++){
				if(s.find(i+j)==s.end()){
					s.insert(i+j);
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}
