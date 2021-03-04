#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;string s;
		cin>>n>>s;
		string a;
		int point1=0,point2=0,point3=0,point4=0,b=0;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			if(a=="CONTEST_WON" && b<=20)
				point1=300+(20-b);
			else if(a=="CONTEST_WON" && b>20)
				point1=300;
			else if(a=="TOP_CONTRIBUTOR")
				point2=300;
			else if(a=="BUG_FOUND")
				point3=b;
			else if(a=="CONTEST_HOSTED")
				point4=50;
			}
			int laddu=point1+point2+point3+point4;
			if(s=="INDIAN"){
				int month=laddu/200;
				cout<<month<<endl;
			}else if(s=="NON_INDIAN"){
				int month=laddu/400;
				cout<<month<<endl;
			}
		}
		return 0;
	}
	
