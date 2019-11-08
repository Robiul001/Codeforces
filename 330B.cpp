#include<bits/stdc++.h>
using namespace std;

bool arr[1005];

int main()
{
    int i,n,m,tmp;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        arr[u]=true;
        arr[v]=true;
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==false)
        {
            break;
        }
    }
    cout<<n-1<<endl;
    for(int j=1;j<=n;j++)
    {
        if(i!=j)
            cout<<j<<" "<<i<<endl;
    }
    return 0;
}
