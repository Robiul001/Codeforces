#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else
    {
        int ans=1;
        for(int i=2;i<=n;i++)
        {
            ans+=(4*(i-1));
        }
        cout<<ans<<endl;
    }
    return 0;
}
