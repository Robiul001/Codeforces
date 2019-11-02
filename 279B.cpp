#include<bits/stdc++.h>
using namespace std;

int arr[100005],ans,r,sum;

int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        while(sum>t)
        {
            sum-=arr[r];
            r++;
        }
        ans = max(ans,(i-r+1));
    }
    cout<<ans<<endl;
    return 0;
}
