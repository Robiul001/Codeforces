#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,cnt=0,big;
    cin>>n>>m;
    if(n>m)
        big=n;
    else
        big=m;
    for(a=0;a<=big;a++)
    {
        for(b=0;b<=big;b++)
        {
            if(((a*a)+b==n) && (a+(b*b)==m))
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
