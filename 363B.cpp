#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int main()
{
    int n,k,cnt,ans=INT_MAX,ans2=INT_MAX;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
        arr[i]+=arr[i-1];
//    for(int i=0;i<=n;i++)
//        cout<<arr[i]<<" ";
//    cout<<endl;
    for(int i=0;i<=n-k;i++)
    {
        ans=min(ans,(arr[i+k]-arr[i]));
        if(ans<ans2)
        {
            ans2=ans;
            cnt=i+1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
