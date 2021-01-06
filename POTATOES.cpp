#include <bits/stdc++.h>

using namespace std;

int nextPrime(int sum){
    int count=0,i,j;
    for(i=sum;i<2500;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            return i;
            break;
        }
        count=0;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int sum=x+y;
        int nxt=nextPrime(sum+1);
        cout<<nxt-sum<<endl;

    }
    return 0;
}