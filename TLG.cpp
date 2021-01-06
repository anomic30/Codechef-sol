#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,player1=0,player2=0,winner,max=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        player1+=a;
        player2+=b;

        int leading=abs(player1-player2);
        if(leading>max){
            max=leading;
            if(player1>player2){
                winner=1;
            }else{
                winner=2;
            }
        }
    }
    cout<<winner<<' '<<max;
    
    return 0;
}