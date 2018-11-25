#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,l,r,r1,cnt,cnt1,el,er,ol,orr,oddn,evenn;
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        if(l%2==0 && r%2==0)
        {
            el=l;
            er=r;
            ol=l+1;
            orr=r-1;
        }
        else if(l%2==0 && r%2==1)
        {
            el=l;
            er=r-1;
            ol=l+1;
            orr=r;
        }
        else if(l%2==1 && r%2==0)
        {
            el=l+1;
            er=r;
            ol=l;
            orr=r-1;
        }
        else
        {
            el=l+1;
            er=r-1;
            ol=l;
            orr=r;
        }
        oddn=((orr-ol)/2)+1;
        evenn=((er-el)/2)+1;
        cnt=((ol+orr)/2)*oddn;
        cnt1=((el+er)/2)*evenn;
        cout<<cnt1-cnt<<endl;
    }
    return 0;
}
