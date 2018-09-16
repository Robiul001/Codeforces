#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,x,y;
    cin>>a>>b>>x>>y;
    n=__gcd(x,y);
    x/=n;
    y/=n;
    //cout<<x<<"/"<<y;
    a/=x;
    b/=y;
    cout<<min(a,b);
    return 0;
}
