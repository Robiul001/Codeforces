#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,ele,arr[104]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>r;
        for(int j=0;j<r;j++)
        {
            cin>>ele;
            arr[ele]++;
        }
    }
    for(int i=1;i<=101;i++)
    {
        if(arr[i]==n)
            cout<<i<<" ";
    }
    return 0;
}
