#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,ans;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k=(k*l)/nl;
    c=c*d;
    p=p/np;
    ans=min(k,min(c,p));
    cout<<ans/n;
    return 0;
}
