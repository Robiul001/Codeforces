#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[100005];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]+arr[i+1]>arr[i+2])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
