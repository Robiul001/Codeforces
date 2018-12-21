#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans;
    cin>>n>>a>>b;
    ans=(a-1+b%n+n)%n+1;
    cout<<ans<<endl;
    return 0;
}
