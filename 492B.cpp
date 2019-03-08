#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,temp,arr[1002];
    double ans,mx=0,ans2;
    cin>>n>>l;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ans=arr[0]-0;
    for(int i=1;i<n;i++)
    {
        temp=arr[i]-arr[i-1];
        mx=max(mx,(double)temp);
    }
    ans2=l-arr[n-1];
    ans=max(ans,max((mx/2.0),ans2));
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}
