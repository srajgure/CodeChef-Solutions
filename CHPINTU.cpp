#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test,N,M;
	cin>>test;
	while(test--)
	{
	    cin>>N>>M;
	    vector<int> baskets(N);
	    vector<int> costs(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>baskets[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>costs[i];
	    }
	    map<int,int> m;
	    for(int i=0;i<N;i++)
	    {
	        m[baskets[i]]+=costs[i];
	        //cout<<m[baskets[i]]<<endl;
	        
	    }
	    int min=INT_MAX;
	    for(auto itr=m.begin();itr!=m.end();itr++)
	    {
	        if(itr->second<min)
	            min=itr->second;
	       
	    }
	    cout<<min<<endl;
	}
	return 0;
}
