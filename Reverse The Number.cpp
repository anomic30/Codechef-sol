#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	long int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int rev=0;
		while(n!=0){
			rev=rev*10+n%10;
			n=n/10;
		}
		cout<<rev<<endl;
	}
	return 0;
}
