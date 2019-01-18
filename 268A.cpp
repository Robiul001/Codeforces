#include<bits/stdc++.h>
using namespace std;

int arr[103];

int main()
{
    int ans=0,n,ele1[35],ele2[35];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele1[i]>>ele2[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((ele1[i]==ele2[j]) && (i!=j))
            {
                arr[ele1[i]]++;
            }
        }
    }

    for(int i=1;i<=101;i++)
    {
        ans+=arr[i];
    }
    cout<<ans<<endl;
    return 0;
}
