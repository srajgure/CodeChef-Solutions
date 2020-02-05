#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test,N,ans=0;
	cin>>test;
	while(test--)
	{
	    cin>>N;
	    int j=5;
	    while(N/j>0)
	    {
	        ans+=N/j;
	        j=j*5;
	    }
	    cout<<ans<<endl;
	    ans=0;
	}
	return 0;
}
