#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long test,N,temp;
	cin>>test;
	vector<long long> arr1;
	vector<long long> arr2;
	while(test--)
	{
	    cin>>N;
	    for(long long i=0;i<N;i++)
	    {
	        cin>>temp;
	        arr1.push_back(temp);
	        
	    }
	    sort(arr1.begin(),arr1.end());
	    for(long long i=0;i<N;i++)
	    {
	        cin>>temp;
	        arr2.push_back(temp);
	        
	    }
	    sort(arr2.begin(),arr2.end());
	    long long sum=0;
	    for(long long i=0;i<N;i++)
	    {
	        sum+=min(arr1[i],arr2[i]);
	    }
	    cout<<sum<<endl;
	    arr1.clear();
	    arr2.clear();
	    //sum1=0;sum2=0;
	}
	return 0;
}
