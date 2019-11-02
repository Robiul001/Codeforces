#include<bits/stdc++.h>
using namespace std;

int arr[105];

int main()
{
    int n,k,mn=INT_MAX,mx=INT_MIN;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
    }
    if(mx-mn>k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr[i];j++)
            cout<<(j%k)+1<<" ";
        cout<<endl;
    }
    return 0;
}
