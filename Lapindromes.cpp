#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		int x=str.length();
		int d=x/2;
		string s1,s2;
		if(x<2){
			cout<<"NO"<<endl;
			break;
		}else if(x%2==0){
			s1=str.substr(0,d);
			s2=str.substr(d,x);
			sort(s1.begin(),s1.end());
			sort(s2.begin(),s2.end());
			if(s1==s2){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
		else{
			s1=str.substr(0,d);
			s2=str.substr(d+1,x);
			sort(s1.begin(),s1.end());
			sort(s2.begin(),s2.end());
			if(s1==s2){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
