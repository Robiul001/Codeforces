#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,t,cnt=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        cnt+=t;
    }
    if((cnt+(n-1)*10)>d)
    {
        cout<<-1;
    }
    else
    {
        cout<<(d-cnt)/5;
    }
//    for(int i=0;i<n;i++)
//    {
//        ans+=arr[i];
//        ans+=10;
//        cnt+=2;
//    }
//    ans-=10;
//    cnt-=2;
//    cout<<ans<<" "<<cnt;
//    if(ans>d)
//    {
//        cout<<-1;
//    }
//    else
//    {
//        if((ans+5)<=d)
//        {
//            cout<<cnt+1;
//        }
//        else
//        {
//            cout<<cnt;
//        }
//    }
    return 0;
}
