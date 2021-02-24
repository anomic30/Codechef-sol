#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int count=0,a=-1;
	    long int n;
	    cin>>n;
	    if(n%10 == 0)
	        cout<<count<<endl;
	    else
	    {
	        n = n*2;
	        count++;
	        if(n%10 == 0)
	            cout<<count<<endl;
	        else
	        {
	            n = n*2;
	            count++;
	            if(n%10 == 0)
	                cout<<count<<endl;
	            else
	                cout<<a<<endl;
	        }
	    }
	}
	return 0;
}