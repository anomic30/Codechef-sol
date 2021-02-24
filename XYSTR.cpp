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
		string s;
		cin>>s;
		int count;
		if(s[0]=='x'){
			count=0;
			for(int i=0;i<s.length()-1;i++){
				if(s[i]=='x' && s[i+1]=='y'){
					count++;
				}
			}
		}else{
			count=0;
			for(int i=0;i<s.length()-1;i++){
				if(s[i]=='y' && s[i+1]=='x'){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

