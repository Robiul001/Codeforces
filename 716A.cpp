#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c,arr[100001],cnt=0;
    cin>>n>>c;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])<=c)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
    }
    cout<<cnt+1;
    return 0;
}
