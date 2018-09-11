#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,sum=0,j=11,k,arr[13];
    cin>>k;
    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12);
    if(k==0)
    {
        cout<<0;
        return 0;
    }
    if(arr[11]==0 && k!=0)
    {
        cout<<-1;
        return 0;
    }
    while(sum<k)
    {
        sum+=arr[j];
        j--;
        cnt++;
        if(j<0)
            j=11;
    }
    if(cnt<=12)
    {
        cout<<cnt;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
