#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p,w,d,x,y,z,tmp,mn = INT_MAX;
    cin>>n>>p>>w>>d;
    for(int i=0;i<w;i++)
    {
        tmp = p - (i*d);
        x = tmp / w;
        y = i;
        z = n-(x+y);
        mn = min(x,min(y,z));
        if(tmp%w==0 && mn>=0)
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
