#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,cnt=0,arr[105];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
            cnt++;
        else
            break;
        m=i;
    }
    if(m==n-1)
    {
        cout<<cnt<<endl;
        return 0;
    }
    for(int j=n-1;j>=m;j--)
    {
        if(arr[j]<=k)
            cnt++;
        else
            break;
    }
    cout<<cnt<<endl;
    return 0;
}
