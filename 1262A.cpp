#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans;
        cin>>n;
        int mn[n+2];
        int mx[n+2];
        for(int i=0;i<n;i++)
            cin>>mn[i]>>mx[i];
        sort(mn,mn+n);
        sort(mx,mx+n);
        ans = mn[n-1]-mx[0];
        ans = max(0,ans);
        cout<<ans<<endl;
    }
    return 0;
}
