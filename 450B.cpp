#include<bits/stdc++.h>
using namespace std;
long long int mod = 1000000007;
int main()
{
    long long int x,y,n,ans;
    cin>>x>>y;
    cin>>n;
    if(n%6==0)
    {
        ans = (x-y);
    }
    else if(n%6==1)
    {
        ans = x;
    }
    else if(n%6==2)
    {
        ans = y;
    }
    else if(n%6==3)
    {
        ans = (y-x);
    }
    else if(n%6==4)
    {
        ans = (-x);
    }
    else  /// use for (n%6==5)
    {
        ans = (-y);
    }
    ans = (ans + (2*mod)) % mod;
    cout<<ans<<endl;
    return 0;
}
