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
		int h,m,bmi;
		cin>>m>>h;
		bmi=m/(h*h);
		if(bmi<=18){
			cout<<1<<endl;
		}else if(bmi>=19 && bmi<=24){
			cout<<2<<endl;
		}else if(bmi>=25 && bmi<=29){
			cout<<3<<endl;
		}else if(bmi>=30){
			cout<<4<<endl;
		}
	}


	return 0;
}

