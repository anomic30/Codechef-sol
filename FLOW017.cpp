#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,second;
        cin>>a>>b>>c;
        if((a>=b && a<=c) || (a>=c && a<=b))
            second=a;
        if((b>=a && b<=c) || (b>=c && b<=a))
            second=b;
        if((c>=b && c<=a) || (c>=a && c<=b))
            second=c;
        
        cout<<second<<endl;
    }

    return 0;
}