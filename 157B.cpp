#include<bits/stdc++.h>
using namespace std;
int n,arr[105];
int main()
{
    double ans=0.0,PI;
    PI = acos(-1);
    //cout<<PI<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    sort(arr+1,arr+n+1);
    for(int i=n;i>=1;i=i-2)
    {
        ans+= PI*(arr[i]*arr[i]-arr[i-1]*arr[i-1]);
    }
    cout<<ans<<endl;
    return 0;
}
