#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,in,cnt=0,cnt1=0,cnt2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        if(in==-1 && cnt<=0)
        {
            cnt1++;
        }
        else if(in==-1 && cnt>0)
        {
            cnt--;
        }
        else
        {
            cnt+=in;
        }
        if(cnt<=0)
        {
            cnt=0;
        }
    }

    cout<<cnt1;
    return 0;
}
