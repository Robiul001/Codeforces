#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[102],cnt=0,cnt2=0;;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]==1 && arr[i]==0 && arr[i+1]==1)
            cnt++;
    }
    for(int i=0;i<cnt;i++)
    {
        for(int i=1;i<n-1;i++)
        {
            if(arr[i-1]==1 && arr[i]==0 && arr[i+1]==1)
            {
                arr[i+1]=0;
                cnt2++;
            }
        }
    }
    cout<<cnt2;
    return 0;
}
