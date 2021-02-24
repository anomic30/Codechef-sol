#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,eve=0,odd=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            eve++;
        }else{
            odd++;
        }
    }
    if(odd>eve){
        cout<<"NOT READY"<<endl;
    }else if(eve>odd){
        cout<<"READY FOR BATTLE"<<endl;
    }else if(odd==eve){
        cout<<"NOT READY"<<endl;
    }

    return 0;
}