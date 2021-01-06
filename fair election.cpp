#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        int suma=0,sumb=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            suma+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            sumb+=b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0,count=0,flag=0;
        bool flag=0;
        while((i<n && j<m) &&(sumb<suma && a[i]<b[j])){
            if(a[i]<b[j]){
                swap(a[i],b[j]);
                suma+=a[i];
                count++;
                flag=1;
                i++;
                j++;
            }
        }
        if(flag){
            cout<<count<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
    return 0;
}