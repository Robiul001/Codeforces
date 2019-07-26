#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,arr[102],arr2[102];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    int v,a,b;
    v=arr[0];
    a=arr[n-1];
    b=arr2[0];
    if(max(2*v,a)<b)
        cout<<max(2*v,a)<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
