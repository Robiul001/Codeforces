#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int pos=0,neg =0,zero = 0,n,mn,mx,tmp,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp==0)
        {
            zero++;
            cnt++;
        }
        else if(tmp<0)
        {
            cnt = cnt+ (((-1)*tmp)-1);
            neg++;
        }
        else
        {
            cnt+=(tmp-1);
        }
    }
    if(neg%2==0 || (neg%2==1 && zero>0))
    {
        cout<<cnt<<endl;
    }
    else
    {
        cout<<cnt+2<<endl;
    }
    return 0;
}
