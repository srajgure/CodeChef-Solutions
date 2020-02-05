#include<bits/stdc++.h>
using namespace std;
int find_min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int test,N;
    cin>>test;
    string str;
    unordered_map<char, int> mp;
    int m=INT_MAX;

    while(test--)
    {
        cin>>N;
        cin>>str;

        for(int i=0;str[i];i++)
        {

        if (mp.find(str[i]) == mp.end())
            mp[str[i]] = i;

        // Else update max distance
        else
            m = min(m, i - mp[str[i]]);

            mp[str[i]]=i;
        }
        if(N-m<N and m!=INT_MAX)
            cout<<N-m<<endl;
        else
            cout<<0<<endl;
        m=INT_MAX;

        mp.clear();

    }
    return 0;
}
