#include<bits/stdc++.h>
using namespace std;

int arr[200005];
int cnt[1000005];

int main()
{
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d,ct=0,mn=INT_MAX;
        cin>>n>>k>>d;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            cnt[arr[i]]=0;
        }
        for(int i=1;i<=d;i++)
        {
            cnt[arr[i]]++;
            if(cnt[arr[i]]==1)
                ct++;
        }
        mn=ct;
        for(int i=d+1;i<=n;i++)
        {
            cnt[arr[i-d]]--;
            if(cnt[arr[i-d]]==0)
                ct--;
            cnt[arr[i]]++;
            if(cnt[arr[i]]==1)
                ct++;
            mn = min(mn,ct);
        }
        cout<<mn<<endl;
    }
    return 0;
}
