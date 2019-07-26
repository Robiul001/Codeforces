#include<bits/stdc++.h>
using namespace std;

int arr[10004],ans=0,mx=0;

int MAX(int x)
{
    if(mx<x)
    {
        ans=1;
        mx=x;
    }
    else if(mx==x)
        ans++;
}

int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    int n,m,arrn[52],arrm[52];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arrn[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>arrm[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arrm[j]%arrn[i]==0)
                MAX(arrm[j]/arrn[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
