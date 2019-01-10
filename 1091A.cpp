#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,b,r,ans;
    cin>>y>>b>>r;
    ans=min(y+2,min(b+1,r))*3-3;
    cout<<ans<<endl;
    return 0;
}
