#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=0,j=0,n,a,arr[200005],ans=0,sum=1;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    a=0;
    while(1)
    {
        if(i>j || j>=n)
            break;
        if(arr[j]-arr[i]<=5)
        {
            ans=max(ans,j-i+1);
            j++;
        }
        else
            i++;
    }
    cout<<ans<<endl;
    return 0;
}
