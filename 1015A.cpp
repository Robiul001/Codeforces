#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r,arr[102],cnt=0;
    cin>>n>>m;
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        for(int j=l;j<=r;j++)
        {
            arr[j]=1;
        }
    }
    for(int i=1;i<=m;i++)
    {
        if(arr[i]==0)
            cnt++;
    }
    if(cnt==0)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<cnt<<endl;
    for(int i=1;i<=m;i++)
        if(arr[i]==0)
            cout<<i<<" ";
    return 0;
}
