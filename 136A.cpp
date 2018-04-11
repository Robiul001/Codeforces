#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[102],a1[102],a2[102];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a1[i]=a[i];
    }
    sort(a1,a1+n);
    for(int i=0;i<n;i++)
    {
        int j=a[i];
        a2[j-1]=a1[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a2[i]<<" ";
//        int j=a[i];
//        a2[j-1]=a1[i];
    }
    return 0;
}
