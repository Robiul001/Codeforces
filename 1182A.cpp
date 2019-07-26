#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    if(n%2==1)
        cout<<0<<endl;
    else
    {
        ans=pow(2,n/2);
        cout<<ans<<endl;
    }
    return 0;
}
