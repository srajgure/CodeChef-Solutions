#include<bits/stdc++.h>
using namespace std;

bool kFactors(int n, int k){ 
    vector<int> P; 
  
    while (n%2 == 0){ 
        P.push_back(2); 
        n /= 2; 
    } 
  
 	for (int i=3; i*i<=n; i=i+2){ 
        while (n%i == 0){ 
            n = n/i; 
            P.push_back(i); 
        } 
    } 
 
    if (n > 2) 
        P.push_back(n); 
  
    if (P.size() < k)
        return false;
    return true;
}

bool solve(int x, int k){
	if(k == 1){
		if(x >= 2)
			return true;
		else
			return false;
	}
	if(x < k)
		return false;
	if(x < pow(2,k))
		return false;
	return kFactors(x,k);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;

	while(t--){
		int x,k;

		cin>>x>>k;
		if(solve(x, k))
			cout<<"1\n";
		else
			cout<<"0\n";
	}

	return 0;
}