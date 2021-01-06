#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int n,k,count=0;
    while(n--){
        long long int x;
        cin>>x;
        if(x%k==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}