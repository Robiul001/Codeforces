#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int main()
{
    int n,k;
    cin>>n>>k;
    arr[0]=1;
    arr[n+1] = 1000000001;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    sort(arr,arr+n+1);
    if(arr[k]==arr[k+1])
        cout<<-1;
    else
        cout<<arr[k]<<endl;
    return 0;
}
