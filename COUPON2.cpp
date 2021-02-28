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
		int d,c;
		cin>>d>>c;
		int day1=0,day2=0;
		for(int i=0;i<3;i++){
			int n;
			cin>>n;
			day1+=n;
		}
		for(int i=0;i<3;i++){
			int n;
			cin>>n;
			day2+=n;
		}
		int total=day1+day2+d+d;
		int coupon=0;
		if(day1<150){
			day1+=d;
		}
		if(day2<150){
			day2+=d;
		}
		coupon=day1+day2+c;
		if(coupon<total){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}	
	}
	return 0;
}

