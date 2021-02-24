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
  		int n,count;
  		cin>>n;
  		vector<string> arr;
  		string name;
  		for(int i=0;i<n;i++){
  			cin>>name;
			arr.emplace_back(name);
		}
		set<string> s;
		count=0;
		for(int i=0;i<n;i++){
			char a=arr[i][0];
			for(int j=0;j<n;j++){
				string str=arr[j];
				str[0]=a;
				if(s.find(str)==s.end()){
					s.insert(str);
					count++;
				}
			}
		}
		set<string> bag;
		for(int i=0;i<n;i++){
			string toDelete=arr[i];
			auto it=s.find(toDelete);
			if(it!=s.end()){
				bag.insert(toDelete);
				s.erase(toDelete);
			}
		}
		
		int res=0;
		for(auto i:s){
			string k=i;
			char p=k[0];
			for(auto j:s){
				string m=j;
				char b=m[0];
				k[0]=b;
				m[0]=p;
				int check1=0,check2=0;
				if(bag.find(k)!=bag.end()){
					check1=1;
				}
				if(bag.find(m)!=bag.end()){
					check2=1;
				}
				if(check1==1 && check2==1){
					res++;
				}
			}
		}
		cout<<res<<endl;
	}

	return 0;
}


