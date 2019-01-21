#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tt,t,arr[1002],cnt=0,sum=0,ans=10000001;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=1;j<=101;j++)
    {
        cnt=0;
        t=j;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<t)
                cnt+=((t-1)-arr[i]);
            if(arr[i]>t)
                cnt+=(arr[i]-(t+1));
        }
        if(ans>cnt)
        {
            tt=t;
            ans=cnt;
        }
    }
    cout<<tt<<" "<<ans<<endl;
    return 0;
}
