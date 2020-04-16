#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main() {
	// your code goes here
	long long test,N;
	cin>>test;
	while(test--)
	{
	    cin>>N;
	    vector<long long> arr(N);
	    for(long long i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end(),greater<long long>());
	    /*for(auto itr=arr.begin();itr!=arr.end();itr++)
	    {
	        cout<<*itr<<" ";
	    }*/
	    //cout<<endl;
	    long long sum=0;
	    for(long long i=0;i<N;i++)
	    {
	        arr[i]-=i;
	        if(arr[i]<0)
	            arr[i]=0;
	            
	        sum+=arr[i];
	    }
	    cout<<sum%MOD<<endl;
	    
	}
	return 0;
}
