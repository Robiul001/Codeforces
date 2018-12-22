#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,arr[102],sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        if(arr[i]>0)
            break;
        sum-=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
