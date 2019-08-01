#include<bits/stdc++.h>
using namespace std;

int arr[100005],b[100005];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        b[i] = arr[i];
    }
    sort(b,b+n);
    int l=0,r=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=b[i])
        {
            r = i;
            k++;
            if(k==1)
                l = i;
        }
    }

    reverse(arr+l,arr+r+1);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=b[i])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
    return 0;
}
