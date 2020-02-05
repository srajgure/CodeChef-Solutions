#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int test,N,M,n;
	vector<vector<int> > m;
	vector<int> temp;
	cin>>test;
	while(test--)
	{
	    cin>>N>>M;
	    for(int i=0;i<N;i++)
	    {
	        for(int j=0;j<M;j++)
	        {
	            cin>>n;
	            temp.push_back(n);
	        }
	        m.push_back(temp);
	        temp.clear();
	    }
	    int ans=0;
	    int r1,r2,c1,c2;
	    for(int i=1;i<N-1;i++)
	    {
	        for(int j=1;j<M-1;j++)
	        {

	            c1=m[i-1][j];
	            c2=m[i+1][j];
	            r1=m[i][j-1];
	            r2=m[i][j+1];
	            int tt=min(i,j);
	            //cout<<tt<<endl;
	            for(int k=1;k<tt+1;k++)
	            {
	                //cout<<r1<<" "<<r2<<" "<<c1<<" "<<c2<<endl;
	                if(r1==r2 and c1==c2)
	                {
	                     ans++;
	                     if(i-1-k >= 0)
	                     {
	                        c1=m[i-1-k][j];
	                     }
	                     else
	                        break;

	                     if((i+1+k) <= (N-1))
	                     {
	                         c2=m[i+1+k][j];
	                     }
	                     else
	                        break;

	                     if(j-1-k >= 0)
	                        r1=m[i][j-1-k];
	                     else
	                        break;

	                     if((j+1+k) <= (M-1))
	                        r2=m[i][j+1+k];
	                     else
	                        break;
	                }
	                else
	                    break;
	            }
	        }
	    }
	    cout<<(N*M)+ans<<endl;
	    ans=0;
	    m.clear();
	}
	return 0;
}
