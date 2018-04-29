#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,cnt;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int j=0,k;
    while(j<t)
    {
        k=j;
        cnt=arr[j];
        j+=cnt;
    }
    if(k+1==t)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    //cout<<k;
    return 0;
}
