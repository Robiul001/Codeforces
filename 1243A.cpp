#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int ans=0,n,arr[10005];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=n-1;i>=0;i--)
        {
            if(ans<arr[i])
            {
                ans++;
            }
            else
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
