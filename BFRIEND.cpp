#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long test,N,a,b,c,temp;
	vector<long long> arr;
	cin>>test;
	while(test--)
	{
	    cin>>N>>a>>b>>c;
	    for(int i=0;i<N;i++)
	    {
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    long long min=INT_MAX;
	    long long arri;
	    for(int i=0;i<N;i++)
	    {


	        if((abs(arr[i]-b)+abs(arr[i]-a)) < min)
	        {
	            min=(abs(arr[i]-b)+abs(arr[i]-a));
	            arri=arr[i];
	        }


	    }
	    long long ans;
	    if(min!=INT_MAX)
	        ans=min+c;
	    else
	        ans=c+abs(arri-a);

	    cout<<ans<<endl;
	    arr.clear();

	}
	return 0;
}
