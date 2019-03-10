#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a,b,x,y,v,n;
        double d,t,mini=INT_MAX;
        cin>>a>>b;
        cin>>n;
        while(n--)
        {
              cin>>x>>y>>v;
              d=sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
              mini=min(mini,(d/(double)v));
        }
        cout<<fixed<<setprecision(20)<<mini<<endl;
        return 0;
}
