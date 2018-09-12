#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b=0,m,n,arr[200005];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    m=arr[n-1]-arr[0];
    if(arr[n-1]!=arr[0])
    {
        for(int i=0;i<n;i++)
        {
            if(arr[0]==arr[i])
                a++;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[n-1]==arr[i])
                b++;
        }
        cout<<m<<" "<<(a*b);
    }
    else
    {
         for(int i=n-1;i>=1;i--)
        {
            a+=i;
        }
        cout<<m<<" "<<a;
    }
    return 0;
}
