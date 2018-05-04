#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,pos=1,cnt=0;
    cin>>n>>m;
    long long int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        if(pos<arr[i])
        {
            cnt+=arr[i]-pos;
            pos=arr[i];
        }
        else if(pos>arr[i])
        {
            cnt+=n-(pos-arr[i]);
            pos=arr[i];
        }
        else{}
    }

    cout<<cnt;
    return 0;
}
