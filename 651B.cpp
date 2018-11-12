#include<bits/stdc++.h>
using namespace std;
int cnt,n,a,arr[1002];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[a]++;
        if(arr[a]>cnt)
        {
            cnt=arr[a];
        }
    }
    cout<<n-cnt;
    return 0;
}
