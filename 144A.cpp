#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,arr[102],arr2[102],lowindex,highindex;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);
    //cout<<arr2[0]<<"\t"<<arr2[n-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr2[0])
        {
            lowindex=i;
        }
        if(arr[i]==arr2[n-1]&&cnt==0)
        {
            highindex=i;
            cnt++;
        }
    }
    lowindex++;
    highindex++;
    //cout<<lowindex<<" "<<highindex<<endl;
    if(lowindex>highindex)
    {
        cout<<(n-lowindex)+(highindex-1);
    }
    else
    {
        cout<<(n-lowindex)+(highindex-2);
    }
    return 0;
}
