#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        int target=arr[k-1];
        sort(arr.begin(),arr.end());
        long long l=0,r=n-1,index;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==target){
                index=mid;
                break;
            }else if(arr[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        cout<<index+1<<endl;
    }
    return 0;
}