#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100005],mn=INT_MAX,mnindex;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(mn>arr[i])
        {
            mn=arr[i];
            mnindex=i;
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==mn && mnindex!=i)
            cnt++;
    }
    if(cnt>0)
        cout<<"Still Rozdil"<<endl;
    else
        cout<<mnindex<<endl;
    return 0;
}
