#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans,n,m,arr[55];
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    ans=arr[n-1]-arr[0];
    for(int i=1;i<=m-n;i++)
    {
        if(arr[i+n-1]-arr[i]<ans)
        {
             ans=arr[i+n-1]-arr[i];
        }
    }
    cout<<ans;
    return 0;
}
