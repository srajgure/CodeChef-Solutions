#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long test,N,K,temp;
    cin>>test;
    while(test--)
    {
        cin>>N>>K;
        long long sum=0;
        for(long long i=0;i<N;i++)
        {
            cin>>temp;
            sum+=temp;
        }
        cout<<(sum%K)<<endl;
    }
	return 0;
}
