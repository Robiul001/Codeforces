#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,arr[102]={0},l,r,chk=0;
    cin>>n>>a>>b;
    for(int i=1;i<n;i++)
    {
        cin>>l>>r;
        for(int j=l;j<r;j++)
        {
            arr[j]=1;
        }
    }
    for(int i=a;i<b;i++)
    {
        if(arr[i]==0)
            chk++;
    }
    cout<<chk;
    return 0;
}
