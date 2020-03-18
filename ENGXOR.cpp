#include<iostream>
#include<vector>
using namespace std;

void fastscan(long &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
} 
unsigned long countSetBits(long n) 
{ 
        unsigned long count = 0; 
        while (n) { 
            n &= (n - 1); 
            count++; 
        } 
        return count; 
} 
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long test;
	fastscan(test);
	while(test--)
	{
	    long N,Q;
	    fastscan(N);
	    fastscan(Q);
	    
	   // vector<long> arr;
	    long even=0;
	    for(long i=0;i<N;i++)
	    {
	        long temp;
	        fastscan(temp);
	        //arr.push_back(temp);
	        long num=countSetBits(temp);
	        if(num%2==0)
	            even++;
	    }
	        
	    ///long odd=N-even;
	    //long P;
	    while(Q--)
	    {
	        long P;
	        fastscan(P);
	        long countp=countSetBits(P);
	        if(countp%2==0)
	            cout<<even<<" "<<N-even<<"\n";
	        else
	            cout<<N-even<<" "<<even<<"\n";
	       
	    }
	   
	}
	return 0;
}
