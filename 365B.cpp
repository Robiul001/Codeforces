#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100005],sum,cnt;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sum = min(2,n);
    cnt=2;
    for(int i=2;i<n;i++)
    {
        if(arr[i]==arr[i-1]+arr[i-2])
            cnt++;
        else
            cnt=2;
        sum = max(sum,cnt);
    }
    cout<<sum<<endl;
    return 0;
}
