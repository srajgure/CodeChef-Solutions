#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long test,N,A,B,C,D,E,verdict,temp,S;
	cin>>test;
	while(test--)
	{
	    cin>>N;
	    temp=pow(10,N);
	    cin>>A;
	    S=A+(2*temp);
	    cout<<S<<endl;
	    fflush(stdout);
	    cin>>B;
	    C=temp-B;
	    cout<<C<<endl;
	    fflush(stdout);
	    cin>>D;
	    E=temp-D;;
	    cout<<E<<endl;
	    fflush(stdout);
	    cin>>verdict;
	    if(verdict == -1)
	        exit(0);

	}
	return 0;
}
