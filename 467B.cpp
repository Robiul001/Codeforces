#include<bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    int n,m,k,cnt=0;
    cin>>n>>m>>k;
    for(int i=0;i<=m;i++)
        cin>>arr[i];
    for(int i=0;i<m;i++)
        if(__builtin_popcount(arr[m]^arr[i])<=k)
            cnt++;
    cout<<cnt<<endl;
    return 0;
}
