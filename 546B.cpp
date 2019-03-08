#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[3005],cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        while(arr[i-1]>=arr[i])
        {
            arr[i]++;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
