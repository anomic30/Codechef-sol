#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		if(str.length()<10){
			cout<<"NO"<<"\n";
		}else{
			int num=0,lc=0,uc=0,sc=0;
			for(int i=1;i<str.length()-1;i++){
				if((str[i-1]>='a' && str[i-1]<='z')||(str[i+1]>='a' && str[i+1]<='z')){
            		lc=1;
        		}
				if(isdigit(str[i])){
            		num=1;
        		}if(str[i]>='A' && str[i]<='Z'){
            		uc=1;
        		}if(str[i]=='@' ||str[i]=='#' ||str[i]=='%' ||str[i]=='&' ||str[i]=='?'){
            		sc=1;
        		}
			}
			int total=num+lc+uc+sc;
			if(total==4){
				cout<<"YES"<<"\n";
			}
			else{
				cout<<"NO"<<"\n";
			}
		}
			
	}
	return 0;
}
