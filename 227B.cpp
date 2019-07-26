#include<bits/stdc++.h>
using namespace std;
int ass_arr[100005],dec_arr[100005];
int main()
{
    int n,m,arr[100005];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
    {
        if(ass_arr[arr[i]]==0)
            ass_arr[arr[i]]=i;
    }
    for(int i=n;i>=1;i--)
    {
        if(dec_arr[arr[i]]==0)
            dec_arr[arr[i]]=n-i+1;
    }
    cin>>m;
    long long int a=0,b=0,tmp;
    while(m--)
    {
        cin>>tmp;
        a+=ass_arr[tmp];
        b+=dec_arr[tmp];
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
