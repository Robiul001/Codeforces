#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s,ans;
    cin>>n>>s;
    ans=s/n;
    if((ans*n)==s)
        cout<<ans;
    else
        cout<<ans+1;
    return 0;
}
