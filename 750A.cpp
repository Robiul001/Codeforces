#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,n,k,cnt=0,c=1,cn;
    cin>>n>>k;
    cn=240-k;
//    while(cn!=0)
//    {
//        cn-=(5*i);
//        if((5*i)<=cn)
//        {
//            cnt++;
//        }
//        else
//        {
//            break;
//        }
//    }
    for(int i=5;i<=cn;(i+=c*5))
    {

        cnt++;
        c++;
    }
    if(cnt>=n)
    {
        cout<<n;
    }
    else
    {
        cout<<cnt;
    }
    return 0;
}
