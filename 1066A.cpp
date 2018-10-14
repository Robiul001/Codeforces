#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int L,v,l,r,div,cnt=0,ans;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>L>>v>>l>>r;
        ans=(((l-1)/v) + (L/v) - (r/v));
        cout<<ans<<endl;
    }
    return 0;
}
