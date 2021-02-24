#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int res=a-b;
    int r=res%10;
    res=res/10;
    if(r==0){
        r=9;
    }else if(r==2){
        r=8;
    }else if(r==3){
        r=7;
    }else if(r==4){
        r=5;
    }else if(r==5){
        r=6;
    }else if(r==6){
        r=4;
    }else if(r==7){
        r=3;
    }else if(r==8){
        r=2;
    }else if(r==1){
        r=8;
    }else if(r==9){
        r=8;
    }
    int p=res*10+r;
    cout<<p<<endl;

    return 0;
}