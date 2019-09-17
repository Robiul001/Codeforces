#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100005],cnt=0,pos;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i!=0 && arr[i-1]>arr[i])
        {
            cnt++;
            pos = i;
        }
    }
    if(cnt==0)
        cout<<0<<endl;
    else if(cnt==1 && arr[0]>=arr[n-1])
        cout<<n-pos<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
