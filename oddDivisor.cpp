#include <bits/stdc++.h>

using namespace std;

bool isOdd(int i){
    if(i%2!=0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                if(isOdd(i) && i>1){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}