#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test,num,temp;
	vector<int> arr;
	cin>>test;
	while(test--)
	{
	    cin>>num;
	    for(int i=0;i<num;i++)
	    {
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    int min=INT_MAX;
	    for(int i=0;i<arr.size();i++)
	    {
	        if(arr[i]<min)
	            min=arr[i];
	    }
	    cout<<min<<endl;
	    arr.clear();
	}
	return 0;
}
