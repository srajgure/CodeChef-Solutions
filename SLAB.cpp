#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test,income;
	cin>>test;
	while(test--)
	{
	    cin>>income;
	    int temp=income;
	    vector<int> arr;
	    int count=1;
	    for(int i=0;i<7;i++)
	    {
	        if( temp>250000 and i==6)
	        {
	            arr.push_back(temp);
	            temp=0;
	        }
	        else if(temp>=250000)
	        {
	            arr.push_back(250000);
	            temp-=250000;
	        }
	        else
	        {
	            arr.push_back(temp);
	            temp=0;
	        }
	    }
	    /*
	    for(int i=0;i<arr.size();i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	    */
	    int interest=5;
	    int tax=0;
	    for(int i=0;i<arr.size();i++)
	    {
	        if(i>=1)
	        {
	            tax+=((arr[i]*interest*i)/100);
	        }
	    }
	    cout<<income-tax<<endl;
	    arr.clear();
	}
	return 0;
}
