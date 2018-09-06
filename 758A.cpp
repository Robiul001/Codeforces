#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int n1,arr[102],cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    n1=arr[n-1];
    //cout<<n1;
    for(int i=0;i<n;i++)
    {
        cnt+=n1-arr[i];
    }
    cout<<cnt;
    return 0;
}
