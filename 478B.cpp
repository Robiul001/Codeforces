#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,m,n,t,cnt=0,cnt1=0,maxi=0,mini=0;
    cin>>n>>m;
    if(m==1)
    {
        cnt=((n-1)*n)/2;
//        for(int i=1;i<n;i++)
//        {
//            cnt+=i;
//        }
        cout<<cnt<<" "<<cnt;
        return 0;
    }
    b=n-(m-1);
    maxi+=(b*(b-1))/2;
    //cout<<b<<endl;
//    for(int i=1;i<b;i++)
//    {
//        maxi+=i;
//    }
    a=n/m;
    //cout<<a<<endl;
    if(n%m==0)
    {
        cnt+=(a*(a-1))/2;
//        for(int i=1;i<a;i++)
//            cnt+=i;
        //cnt*=m;
        mini=cnt*m;
    }
    else
    {
        t=n%m;
        m-=t;
        cnt+=(a*(a-1))/2;
        cnt1+=(a*(a+1))/2;

//        for(int i=1;i<a;i++)
//            cnt+=i;
//        for(int j=1;j<a+1;j++)
//            cnt1+=j;
        cnt*=m;
        cnt1*=t;
        mini=cnt+cnt1;
    }
    cout<<mini<<" "<<maxi;
    return 0;
}
