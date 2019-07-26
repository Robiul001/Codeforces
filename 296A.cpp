#include<bits/stdc++.h>
using namespace std;

int n,arr[1005],ans;

int main()
{
    int a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[a]++;
        ans=max(ans,arr[a]);
    }
//    cout<<ans;
    if(ans<=(n+1)/2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
