#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[102],n,cons=0,dec=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        if((arr[i]==arr[i+1]) && dec>0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(arr[i]==arr[i+1])
        {
            cons++;
        }
        if(arr[i]>arr[i+1])
        {
            dec++;
        }
        if((arr[i]<arr[i+1]) && (dec>0 || cons>0))
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
