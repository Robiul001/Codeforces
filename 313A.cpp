#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans;
    cin>>n;
    if(n>=0)
    {
        cout<<n;
    }
    else
    {
        a=n/10;
        b=((n/100)*10)+(n%10);
        ans=max(a,b);
        cout<<ans;
    }
    return 0;
}
