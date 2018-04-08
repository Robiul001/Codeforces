#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,y,cnt=0,f,s,t,y1;
    cin>>y;
    while(1)
    {
        y++;
        a=y;
        f=a/1000;
        a=a%1000;
        s=a/100;
        a=a%100;
        t=a/10;
        y1=a%10;
        if(f!=s && f!=t && f!=y1 && s!=t && s!=y1 && t!=y1)
        {
            cout<<y;
            return 0;
        }
    }
    return 0;
}
