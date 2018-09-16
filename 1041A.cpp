#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[1001],cnt=0,ans;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ans=arr[n-1]-arr[0]+1;
    cout<<ans-n;
    return 0;
}
