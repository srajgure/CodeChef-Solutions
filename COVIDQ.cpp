#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test,N,temp;
	cin>>test;
	while(test--)
	{
	    cin>>N;
        vector<int> arr;
	    for(int i=0;i<N;i++)
	    {
	        cin>>temp;
	        if(temp==1)
	            arr.push_back(i+1);
	        
	    }
	    string ans="YES";
	    for(int i=1;i<arr.size();i++)
	    {
	        if((arr[i]-arr[i-1])<6)
	        {
	            ans="NO";
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
