#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k, int arr[]){
    int counta=0,countb=0,sum=0,a,b,flag=0,j;
    for(int i=n-1;i>=0;i--){
        j=i;
        sum=sum+arr[i];
        counta++;
        if(sum>=k){
            a=counta;
            flag++;
            break;
        }
    }
    sum=0;
    for(int i=j-1;i>=0;i--){
        sum=sum+arr[i];
        countb++;
        if(sum>=k){
            b=countb;
            flag++;
            break;
        }
    }
    if(flag==2){
        return counta+countb;
    }else{
        return -1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int res=solve(n,k,arr);
        cout<<res<<endl;
    }
    return 0;
}