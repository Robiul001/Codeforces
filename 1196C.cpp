#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,f1,f2,f3,f4;
        int lx = -1e5,ly = -1e5;
        int hx = 1e5,hy = 1e5;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if(f1==0)
                lx = max(lx,x);
            if(f2==0)
                hy = min(hy,y);
            if(f3==0)
                hx = min(hx,x);
            if(f4==0)
                ly = max(ly,y);
        }
        if(lx<=hx && ly<=hy)
            cout<<1<<" "<<lx<<" "<<ly<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
