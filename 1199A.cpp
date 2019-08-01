#include<bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
    {
        int check = 0;
        int lo = max(1,i-x);
        int hi = min(n,i+y);
        for(int j=lo;j<=hi;j++)
        {
            if(arr[i]>arr[j])
                check=1;
        }
        if(check==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
