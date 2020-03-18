#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll centers_x[8]={1,2,3,4,5,6,7,8};
ll centers_y[8]={1,2,3,4,5,6,7,8};
ll tops_x[8]={1,1,1,1,2,4,6,8};
ll tops_y[8]={1,3,5,7,8,8,8,8};
ll downs_x[8]={1,3,5,7,8,8,8,8};
ll downs_y[8]={1,1,1,1,2,4,6,8};

int main() {
	// your code goes here
	ll test,x,y;
    cin>>test;
    while(test--)
    {
        cin>>x>>y;
        ll count=0;
        vector<ll> ans_x;
        vector<ll> ans_y;
        int row=(x+y)/2;
        row--;
        ans_x.push_back(centers_x[row]);
        ans_y.push_back(centers_y[row]);
        for(int i=0;i<8;i++)
        {
            ans_x.push_back(centers_x[i]);
            ans_y.push_back(centers_y[i]);
            
            ans_x.push_back(tops_x[i]);
            ans_y.push_back(tops_y[i]);
            
            ans_x.push_back(downs_x[i]);
            ans_y.push_back(downs_y[i]);
            
            ans_x.push_back(centers_x[i]);
            ans_y.push_back(centers_y[i]);
            
        }
        cout<<33<<"\n";
        for(int i=0;i<33;i++)
        {
            cout<<ans_x[i]<<" "<<ans_y[i]<<"\n";
        }
        ans_x.clear();
        ans_y.clear();
    }
	return 0;
}
