#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	// your code goes here
	long long test,N,temp;
	cin>>test;
	map<long long, long long> m;
	while(test--)
	{
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>temp;
	        m[temp]++;
	    }
	    auto it=m.begin();
	    long long max=0;

	    for(it=m.begin();it!=m.end();it++)
	    {
	        if(it->second>max)
	            max=it->second;
	    }
	    cout<<N-max<<endl;
	    m.clear();


	}
	return 0;
}
