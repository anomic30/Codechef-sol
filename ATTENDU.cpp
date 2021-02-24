#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,a;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==1){
                sum=sum+a;
            }
        }
        int rem=120-n;
        int total=sum+rem;
        float per=(total/120)*100;
        if(per>=75.00){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}