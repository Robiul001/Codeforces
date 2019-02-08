#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,sum=0,arr[300005];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n/2;i++)
    {
        sum+=(arr[i]+arr[n-i-1])*(arr[i]+arr[n-i-1]);
    }
    cout<<sum<<endl;
    return 0;
}
