#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int arr1[3002],arr2[3002];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int tmp = n;
    tmp = min(tmp,m);
    for(int i=tmp;i>=0;i--)
    {
        bool chk = true;
        for(int j=0;j<i;j++)
        {
            if(arr1[j]>arr2[m-i+j])
                chk=false;
        }
        if(chk)
        {
            cout<<n-i<<endl;
            return 0;
        }
    }
    return 0;
}
