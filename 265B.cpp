#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100005];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int sum = arr[0] + n + (n-1);
    for(int i=1;i<n;i++)
    {
        sum = sum + abs(arr[i-1]-arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}
