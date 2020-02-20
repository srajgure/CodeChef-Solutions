#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test,N,M,temp;
	cin>>test;
	while(test--)
	{
	    cin>>N>>M;
	    vector<int> px,nx,py,ny;
	    map<int,bool> xx,yy;
	    for(int i=0;i<N;i++)
	    {
	        cin>>temp;
	        if(temp<0)
	            nx.push_back(temp);
	        else
	            px.push_back(temp);
	            
	       xx[temp]=1;
	    }
        for(int i=0;i<M;i++)
	    {
	        cin>>temp;
	        if(temp<0)
	            ny.push_back(temp);
	        else
	            py.push_back(temp);
	            
	       yy[temp]=1;
	    }
	    int count=0;
	    for(int i=0;i<px.size();i++)
	    {
	        for(int j=0;j<nx.size();j++)
	        {
	            int h=px[i]-nx[j];
	            double y=sqrt(((h*h)-(px[i]*px[i])-(nx[j]*nx[j]))/2);
	            int y_int=int(y);
	            y= y - y_int;
	            if(y==0 )
	            {
	                if(yy[y_int])
	                    count++;
	                if(yy[-1*y_int])
	                    count++;
	            }
	        }
	    }
	    for(int i=0;i<py.size();i++)
	    {
	        for(int j=0;j<ny.size();j++)
	        {
	            int h=py[i]-ny[j];
	            double x=sqrt(((h*h)-(py[i]*py[i])-(ny[j]*ny[j]))/2);
	            int x_int=int(x);
	            x= x - x_int;
	            if(x==0 )
	            {
	                if(xx[x_int])
	                    count++;
	                if(xx[-1*x_int])
	                    count++;
	            }
	        }
	    }
	    if(xx[0] and yy[0])
	        count+= (N-1)*(M);
	    else if(yy[0])
	        count+=N*(M-1);
	    else if(xx[0])
	        count+=(N-1)*(M-1);
	    cout<<count<<endl;
	}
	return 0;
}
S