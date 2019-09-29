#include<bits/stdc++.h>
using namespace std;

long long int arr[1002][1002];
long long int ar[1002];

int main()
{
    long long int n,ans;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    ans = sqrt((arr[0][1]*arr[0][2])/(arr[1][2]));

    cout<<ans<<" ";
    for(int i=1;i<n;i++)
        cout<<arr[0][i]/ans<<" ";
    return 0;
}
