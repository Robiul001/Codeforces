#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt,cnt1;
    long long int arr[100001],arr2[100001],arr3[100001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        cin>>arr2[i];
    }
    sort(arr2,arr2+(n-1));
    for(int i=0;i<n-2;i++)
    {
        cin>>arr3[i];
    }
    sort(arr3,arr3+(n-2));

    ///verify
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr2[i])
        {
            cnt=arr[i];
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr2[i]!=arr3[i])
        {
            cnt1=arr2[i];
            break;
        }
    }
    /// Result
    cout<<cnt<<endl<<cnt1;
    return 0;
}
