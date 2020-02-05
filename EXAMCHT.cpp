#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// your code goes here
	long long test,A,B;
	cin>>test;
	while(test--)
	{
	    cin>>A>>B;
	    long long mx=max(A,B) - min(A,B);
	    //cout<<mx;
	    int ans=0;
	    for(long long i=1;i<=sqrt(mx);i++)
	    {
	        if(mx%i==0)
	        {
	            if(mx/i==i)
	                ans++;
	            else
	                ans+=2;
	        }

	    }
	    if(A==B)
	        cout<<-1<<endl;
	    else
	        cout<<ans<<endl;
	   ans=0;
	}
	return 0;
}
