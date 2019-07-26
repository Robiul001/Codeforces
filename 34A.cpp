#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[105],mn=INT_MAX,a,b;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        if(mn>abs(arr[i]-arr[i+1]))
        {
            mn=abs(arr[i]-arr[i+1]);
            a=i;
            b=i+1;
        }
    }
    if(mn>abs(arr[1]-arr[n]))
    {
        a=n;
        b=1;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
