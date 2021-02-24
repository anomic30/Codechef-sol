/**
 *   author: anomic30
**/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define MOD 1000000007
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ios::sync_with_stdio(false);
  		cin.tie(0);
		char colon;
		int hh,mm;
		string format;
		cin>>hh>>colon>>mm;
		cin>>format;
		if(format=="PM" && hh!=12){
			hh+=12;
			hh=hh*100+mm;
		}else if(format=="AM" && hh==12){
			hh=0+mm;
		}else{
			hh=hh*100+mm;
		}
		string res="";
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int h1,m1,h2,m2;
			string f1,f2;
			cin>>h1>>colon>>m1;
			cin>>f1;
			cin>>h2>>colon>>m2;
			cin>>f2;
			if(f1=="PM" && h1!=12){
				h1+=12;
				h1=h1*100+m1;
			}else if(f1=="AM" && h1==12){
				h1=0+m1;
			}else{
				h1=h1*100+m1;
			}
			if(f2=="PM" && h2!=12){
				h2+=12;
				h2=h2*100+m2;
			}else if(f2=="AM" && h2==12){
				h2=0+m2;
			}else{
				h2=h2*100+m2;
			}
			if(hh>=h1 && hh<=h2){
				res+="1";
			}else{
				res+="0";
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
