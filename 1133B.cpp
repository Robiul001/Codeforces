#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,arr[105],sum=0,ans=0;
    memset(arr,0,sizeof(arr));
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[a%k]++;
    }
    sum+=arr[0]/2;
    for(int i=1;i<k;i++)
    {
       ans+=min(arr[i],arr[k-i]);
    }
    ans/=2;
    sum+=ans;
    cout<<2*sum<<endl;
    return 0;
}
