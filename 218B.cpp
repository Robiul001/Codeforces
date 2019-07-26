#include<bits/stdc++.h>
using namespace std;

long long int arr[1005];
long long int arr2[1005];

int main()
{
    long long int n,m,mini=0,maxi=0,nn;
    cin>>n>>m;
    nn=n;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sort(arr,arr+m);
        mini+=arr[0];
        arr[0]--;
        if(arr[0]==0)
            arr[0]=1005;
    }

    for(int i=0;i<n;i++)
    {
        sort(arr2,arr2+m);
        maxi+=arr2[m-1];
        arr2[m-1]--;
    }

    cout<<maxi<<" "<<mini<<endl;
    return 0;
}
