#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,S,temp;
    cin>>test;
    list<int> ls;
    int w1,w2,w3;
    while(test--)
    {
        cin>>S>>w1>>w2>>w3;
        double sum=w1+w2+w3;
        if(w1+w2+w3<=S)
            cout<<1<<endl;
        else if(w1+w2<=S or w2+w3<=S)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }

}
