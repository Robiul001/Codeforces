#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0,v;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        if((5-v)>=k)
        {
            cnt++;
        }
    }
    cout<<cnt/3;
    return 0;
}
