#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,u1,d1,u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    while(h)
    {
        w+=h;
        if(d1==h)
        {
            w-=u1;
        }
        if(d2==h)
        {
            w-=u2;
        }
        w=max(0,w);
        h--;
    }
    cout<<w;
    return 0;
}
