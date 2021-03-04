#include<iostream>

using namespace std;

int n;
void solve() {
    while(cin>> n) {
        if (n == 42) {
            break;
        }
        cout<< n <<endl;
    }
}
int main(){
    
    int t = 1;
    while(t--) {
      solve();
    }
    return 0;
}
