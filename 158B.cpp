#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,in,cn=0,cnt1=0,cnt2=0,cnt3=0,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>in;
        if(in==1){
            cnt1++;
        }else if(in==2){
            cnt2++;
        }else if(in==3){
            cnt3++;
        }else{
            sum++;
        }
    }
    while(cnt3>0){
        if(cnt1>0){
        sum++;
        cnt1--;
        }
        else
        {
            sum++;
        }
        cnt3--;
    }
    while(cnt2>0){
        if(cnt1>0){
        sum++;
        cnt1=cnt1-2;
        cnt2--;
        }
        else{
        sum++;
        cnt2=cnt2-2;
        }
    }
    if(cnt1>0)
    {
        cn=ceil((float)cnt1/4);
        sum=sum+cn;
    }
    cout<<sum;
    return 0;
}
