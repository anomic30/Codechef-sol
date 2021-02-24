#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        int front=1,back=1,both=1;
        for(int i=0;i<n;i++){
            if(arr1[i]>arr2[i]){
                front=0;
            }
            if(arr1[n-1-i]>arr2[i]){
                back=0;
            }
            if(arr1[i]!=arr2[i]){
                both=0;
            }
        }
        if(both==1){
            cout<<"both"<<endl;
        }else if(front==1 && back==0){
            cout<<"front"<<endl;
        }else if(back==1 && front==0){
            cout<<"back"<<endl;
        }else if(front==0 && back==0){
            cout<<"none"<<endl;
        }

    }
    return 0;
}