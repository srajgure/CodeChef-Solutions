#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int  test,N;
	string str;
	cin>>test;
	while(test--)
	{
	    cin>>N;
	    cin>>str;
	    int win_a=0,win_b=0;
	    int count_a=0,count_b=0;
	    int count=0;
	    bool flag=0;
	    for(int i=0;str[i];i++)
	    {
	        
	        if(i%2==0)
	        {
	            if(str[i]=='1')
	                win_a++;
	           
	            count_a++;
	        }
	        else if(i%2==1)
	        {
	            if(str[i]=='1')
	                win_b++;
	           
	            count_b++;
	        }
	        
	        //cout<<win_a<<" "<<win_b<<endl;
	       
	            
	            if(win_a >  (win_b + N - count_b))
	            {
	                cout<<i+1<<endl;
	                flag=1;
	                break;
	            }
	            else if(win_b > (win_a + N - count_a))
	            {
	                cout<<i+1<<endl;
	                flag=1;
	                break;
	            }
	            

	        
	        
	        
	    }
	    if(!flag)
	       cout<<2*N<<endl;
	    
	}
	return 0;
}







