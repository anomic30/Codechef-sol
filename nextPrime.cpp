#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    for(int i=n;i<100;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<i<<endl;
            break;
        }
        count=0;
    }


    return 0;
}