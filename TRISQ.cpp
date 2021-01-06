#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
	    cin>>x;
	    x-=2;
	    x/=2;
	    x=x*(x+1)/2;
	    cout<<x<<"\n";
    }

    return 0;
}