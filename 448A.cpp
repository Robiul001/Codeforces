#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n,cnt;
    float cnta,cntb;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    cnta=a1+a2+a3;
    cntb=b1+b2+b3;
    cnta=ceil(cnta/5);
    cntb=ceil(cntb/10);
    //cout<<cnta<<" "<<cntb<<endl;
    cnt=cnta+cntb;
    if((n-cnt)>=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
