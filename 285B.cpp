#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,t,cnt=0,arr[100005];
    cin>>n>>s>>t;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=0;i<n && (s!=t);i++)
    {
        s = arr[s];
        cnt++;
    }
    if(s!=t)
        cnt=-1;
    cout<<cnt<<endl;
    return 0;
}
