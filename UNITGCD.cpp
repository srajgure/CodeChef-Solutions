#include<bits/stdc++.h>
using namespace std;
#define ll long
int main() {

	ll test,N;
	cin>>test;
	while(test--)
	{
	    cin>>N;
	    
	    if(N>3)
	    {
	        cout<<int(N/2)<<"\n";
	        cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";
	        for(int i=4;i<=N-2;i+=2)
	        {
	            cout<<2<<" "<<i<<" "<<i+1<<"\n";
	        }
	        if(N%2==1)
	            cout<<2<<" "<<N-1<<" "<<N<<"\n";
	        else
	            cout<<1<<" "<<N<<"\n";
	        
	    }
	    else
	    {
	        cout<<1<<"\n";
	        cout<<N<<" ";
	        for(int i=1;i<=N;i++)
	            cout<<i<<" ";
	        //cout<<"\n";
	    }
	}

	return 0;
}

